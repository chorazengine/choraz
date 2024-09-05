#include <Choraz.h>

class ExampleProject : public Choraz::Application
{
public:
	ExampleProject()
	{
		INFO("TEST INFO");
	}

	~ExampleProject()
	{

	}
};

Choraz::Application* Choraz::CreateApplication()
{
	return new ExampleProject();
}