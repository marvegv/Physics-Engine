#pragma once

#include "System.h"


class Body {
public:
	
	Body( float m, System& s);

	sf::Vector2f get_force() const { return force; }
	void set_force(sf::Vector2f f) { force = f; }

	sf::Vector2f get_pos() const { return pos; }
	void set_pos(sf::Vector2f p) { pos = p; }

	sf::Vector2f get_vel() const { return vel; }
	sf::Vector2f get_acc() const { return acc; }

	void update(float dt);

	float get_mass() const { return mass; };


private:
	sf::Vector2f force;		//Should all these be private? Yes.
	sf::Vector2f pos;
	sf::Vector2f vel;
	sf::Vector2f acc;
	float mass;
	//sf::FloatRect bounds;     //Used for collisions etc.
};

std::ostream& operator << (std::ostream& os, const Body& b);
