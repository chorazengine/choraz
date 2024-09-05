#pragma once

#include "defines.h"

namespace Choraz
{

	class CHORAZ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the client.
	Application* CreateApplication();

}