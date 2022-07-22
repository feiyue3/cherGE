#pragma once
#include"CherGE/Events/Event.h"
#include "Core.h"

namespace CherGE {
	class CH_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	Application* CreateApplication();
}


