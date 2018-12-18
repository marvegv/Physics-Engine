#include "Ball.h"
extern sf::RenderWindow window;

Ball::Ball(Body* b, sf::Vector2f init_pos, float radius)
	:body{b}
{
	circ = sf::CircleShape(radius);
	circ.setFillColor(sf::Color::Red);
	body->set_pos(init_pos);
}

void Ball::update(sf::RenderTarget& rt) {
	circ.setPosition(body->get_pos());

	rt.draw(circ);
}

bool Ball::mouse_over()
{
	float mouseX = sf::Mouse::getPosition(window).x;
	float mouseY = sf::Mouse::getPosition(window).y;
	sf::Vector2f mouse_pos(mouseX, mouseY);
	std::cout << mouseX << ", " << mouseY;

	if (circ.getGlobalBounds().contains(mouse_pos)) 
		return true;
	
	return false;
}

