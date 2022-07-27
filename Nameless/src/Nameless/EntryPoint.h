#pragma once

#ifdef NL_PLATFORM_WINDOWS

extern Nameless::Application* Nameless::CreateApplication();
int main(int argc, char** argv) {

	auto app = Nameless::CreateApplication();
	app->Run();
	delete app;
}
#endif