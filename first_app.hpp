#pragma once

#include "lve_window_bb.hpp"
#include "lve_pipeline.hpp"

namespace lve
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 800;

		//void run() {};
		void run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!!!" };
		LvePipeline lve_pipeline{ "simple_shader.vert.spv","simple_shader.frag.spv" };
	};
}
