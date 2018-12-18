#pragma once
#include "Body.h"

class Ball {
public:
	Ball(Body* b, sf::Vector2f init_pos, float radius);

	void update(sf::RenderTarget& rt);


	bool mouse_over();
	

private:

	sf::CircleShape circ;
	Body* body;
	
};