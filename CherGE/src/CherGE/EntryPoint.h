#pragma once

#ifdef CH_PLATFORM_WINDOWS
	
	//CherGE::Application* CherGE::CreateApplication();
	extern CherGE::Application* CherGE::CreateApplication();
	
	int main(int argc, char** argv)
	{
		auto app = CherGE::CreateApplication();
		app->Run();
		delete app;
	}

#else
	#error only support windows!

#endif // CH_PLATFORM_WINDOWS

