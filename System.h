#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>

class Body;

class System {
public:
	//System();

	int render(float dt);

	void add_body(Body* b); //Adds a body to the system

	int size();

private:
	std::vector<Body*> bodies;
};

