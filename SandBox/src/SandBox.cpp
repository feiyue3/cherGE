#include "CherGE.h"

class Sandbox : public CherGE::Application
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}

private:

};


CherGE::Application* CherGE::CreateApplication()
{
	return new Sandbox();
}