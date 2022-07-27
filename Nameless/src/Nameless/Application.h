#pragma once

#include "Core.h"

namespace Nameless {
	class NAMELESS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}


