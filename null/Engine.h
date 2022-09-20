#pragma once
#include <SFML/Graphics.hpp>
#include "load.h"

using namespace sf;
class Engine
{
public:
	load LD;
	Engine();
	std::string focud_windows = "";
	void render(sf::RenderWindow &window);
	void ivent(sf::Event &event, sf::RenderWindow& window);
};

