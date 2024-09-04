#pragma once

#ifdef CH_PLATFORM_WINDOWS 

extern Choraz::Application* Choraz::CreateApplication();

int main(int argc, char** argv)
{
	printf("Choraz Engine\n");
	auto app = Choraz::CreateApplication();
	app->Run();
	delete app;
}

#endif