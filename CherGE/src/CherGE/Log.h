#pragma once
#include"core.h"
#include"spdlog/spdlog.h"
#include"spdlog/fmt/ostr.h"
//#include "spdlog/sinks/stdout_color_sinks.h"
#include<memory>
namespace CherGE {
	class CH_API Log
	{
	public:
		static void Init();

		static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr < spdlog::logger> s_CoreLogger;
		static std::shared_ptr < spdlog::logger> s_ClientLogger;
	};

}

//core log macros
#define CH_CORE_TRACE(...)	::CherGE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CH_CORE_WARN(...)	::CherGE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CH_CORE_INFO(...)	::CherGE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CH_CORE_ERROR(...)	::CherGE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CH_CORE_FATAL(...)	::CherGE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define CH_TRACE(...)	::CherGE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CH_WARN(...)	::CherGE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CH_INFO(...)	::CherGE::Log::GetClientLogger()->info(__VA_ARGS__)
#define CH_ERROR(...)	::CherGE::Log::GetClientLogger()->error(__VA_ARGS__)
#define CH_FATAL(...)	::CherGE::Log::GetClientLogger()->fatal(__VA_ARGS__)
