#pragma once

#ifdef CH_PLATFORM_WINDOWS
	
	//CherGE::Application* CherGE::CreateApplication();
	extern CherGE::Application* CherGE::CreateApplication();
	
	int main(int argc, char** argv)
	{
		CherGE::Log::Init();
		/*CherGE::Log::GetCoreLogger()->warn("Initialized log!");
		CherGE::Log::GetClientLogger()->info("Hello!");*/
		CH_CORE_WARN("Initialized log!");
		int a = 1;
		char ch = 'p';
		CH_INFO("fatal! {0}{1}",a,ch);
		auto app = CherGE::CreateApplication();
		app->Run();
		delete app;
	}

#else
	#error only support windows!

#endif // CH_PLATFORM_WINDOWS

