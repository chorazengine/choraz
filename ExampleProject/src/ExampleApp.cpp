#include <Choraz.h>

class ExampleProject : public Choraz::Application
{
public:
	ExampleProject()
	{

	}

	~ExampleProject()
	{

	}

	void Run()
	{
	}
};

Choraz::Application* Choraz::CreateApplication()
{
	return new ExampleProject();
}