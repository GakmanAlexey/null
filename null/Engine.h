#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Engine
{
public:
	Engine();
	std::string focud_windows = "";
	void render(sf::RenderWindow &window);
	void ivent(sf::Event &event, sf::RenderWindow& window);
};

