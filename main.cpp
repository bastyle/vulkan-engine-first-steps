#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include "lve_window_bb.hpp"

#include <iostream>

#include "first_app.hpp"

#include <map>

void testLveWindowBB()
{
    //lve::LveWindow window(800, 600, "My Vulkan Window");
    std::cout << " testLveWindowBB\n";
    lve::LveWindow lveWindow{ 800, 600, "testLveWindowBB!!!" };
}

void testVulcan()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

    /*uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::cout << extensionCount << " extensions supported\n";

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;
    */
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();
}


int main() {
    //testVulcan();
    //testLveWindowBB();
    std::map<int, std::string> mis{};
    mis[0] = "zero";
    mis[1] = "one";

    std::map<std::string, int> mis2{};
    mis2["zero"] = 0;
    mis2["one"] = 1;
     
    std::multimap<int, std::string> mmis{};
    mmis.insert(std::make_pair(0, "zero"));
    mmis.insert(std::make_pair(0, "zero_2"));



    lve::FirstApp app{};
    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

	return EXIT_SUCCESS;
}