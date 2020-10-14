#include <iostream>

#define shared std::shared_ptr

int main()
{
	std::shared_ptr<Core> core = myengine::Core::initialize();
	std::shared_ptr<Entity> entity = core->addEntity();
	std::shared_ptr<Component> component = entity->addComponent<Component>();
	
	core->start();
	
	return 0;
}