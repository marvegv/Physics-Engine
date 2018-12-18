#include "Body.h"

void System::add_body(Body* b)
{
	bodies.push_back(b);
}

int System::render(float dt)
{
	for (Body* a : bodies) {
		a->update(dt);

		for (Body* b : bodies) {

		}

	}

	return 0;
}

int System::size()
{
	return bodies.size();
}

