#include "Body.h"


Body::Body(float m, System& s)
	:mass{ m }
{
	s.add_body(this);
}

void Body::update(float dt)
{
	acc = force / mass;
	vel += dt * acc;
	pos += dt * vel;

	
}

std::ostream& operator << (std::ostream& os, const Body& b)
{
	return os << "Pos: (" << b.get_pos().x << ", " << b.get_pos().y << ")\n"
		<< "Vel: (" << b.get_vel().x << ", " << b.get_vel().y << ")\n"
		<< "Acc: (" << b.get_acc().x << ", " << b.get_acc().y << ")\n"
		<< "Force: (" << b.get_force().x << ", " << b.get_force().y << ")\n"
		<< "Mass:" << b.get_mass() << '\n';
}

