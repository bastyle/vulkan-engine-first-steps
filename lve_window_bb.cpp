#include "lve_window_bb.hpp"

#include <iostream>

namespace lve
{
	LveWindow::LveWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name }
	{
		std::cout << " LveWindow constructor\n";
		initWindow();
	}

	LveWindow::~LveWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void LveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		//glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
		//std::cout << " glfwCreateWindow: \n" << height;
	}

	bool LveWindow::shouldClose()
	{
		return glfwWindowShouldClose(this->window);
	}

	void LveWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface)
	{
		if(glfwCreateWindowSurface(instance, window, nullptr, surface)!= VK_SUCCESS)
		{
			throw std::runtime_error("failed to create a window surface");
		}
	}

}
