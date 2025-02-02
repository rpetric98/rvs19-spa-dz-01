#include <SFML/Graphics.hpp>
#include "Cvijet.h"
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}