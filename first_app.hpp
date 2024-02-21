#pragma once

#include "lve_window_bb.hpp"
#include "lve_pipeline.hpp"
#include "lve_device.hpp"

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
		LveDevice lveDevice{ lveWindow };
		LvePipeline lve_pipeline{
			lveDevice, 
"simple_shader.vert.spv",
"simple_shader.frag.spv",
			LvePipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT) };
	};
}
