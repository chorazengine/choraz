#include "application.h"
#include "Platform/platform.h"
#include "core/logger.h"

namespace Choraz
{
	Application::Application()
	{
	}
	
	Application::~Application()
	{
	}

	void Application::Run()
	{
		PlatformState state;
		Platform platform(&state, "Choraz Engine", 1080, 720, 200, 200);
		while (platform.pump_messages()) {
			INFO("PUMPIN' THEM MESSAGES! %s");
		}
	}

}