#include <Choraz.h>

class ExampleProject : public Choraz::Application {
public:
	ExampleProject() {

	}

	~ExampleProject() {

	}
};

Choraz::Application* Choraz::CreateApplication() {
	return new ExampleProject();
}