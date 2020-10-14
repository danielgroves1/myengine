#include <myengine/myengine.h>
#include <iostream>

#define shared std::shared_ptr

int main()
{
	std::shared_ptr<Core> core = myengine::Core::initialize();
	std::shared_ptr<Entity> entity = core->addEntity();
	std::shared_ptr<Renderer> component = entity->addComponent<Renderer>();
	
	core->start();
	
	return 0;
}