#include <SFML/Graphics.hpp>
#include "Ball.h"
#include <chrono>

int main() {

	sf::RenderWindow window(sf::VideoMode(1280, 720), "Test");
	
	System sys;
	Body part{ 100, sys };
	Ball ball1{ &part, sf::Vector2f(500,500), 50 };


	auto tp = std::chrono::steady_clock::now();

	while (window.isOpen()) {
		sf::Event evnt;
		while (window.pollEvent(evnt)) {
			if (evnt.type == sf::Event::Closed)
				window.close();
		}

			float dt;
			{
				const auto new_tp = std::chrono::steady_clock::now();
				dt = std::chrono::duration<float>(new_tp - tp).count();
				tp = new_tp;
			}


			if (ball1.mouse_over())// && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
				std::cout << "YOO" << std::endl;//part.set_force(sf::Vector2f(1000,1000));

			sys.render(dt);
			
			window.clear(sf::Color::Black);
			ball1.update(window);
			window.display();
	}

	return 0;
}

