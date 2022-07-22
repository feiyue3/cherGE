#include "Application.h"
#include "CherGE/Events/ApplicationEvent.h"
#include "Log.h"
namespace CherGE {
	Application::Application()
	{

	}
	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280,720);

		CH_TRACE(e);

		while (true);
	}
}
