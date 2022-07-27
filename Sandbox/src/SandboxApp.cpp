#include <Nameless.h>

class Sandbox : public Nameless::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};
Nameless::Application* Nameless::CreateApplication() 
{
	return new Sandbox();
}