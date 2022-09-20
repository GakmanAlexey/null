#pragma once
#include <SFML/Graphics.hpp>
#include "load.h"

using namespace sf;
class Engine
{
public:
	load LD;
	sf::Text txt;
	String text_teader_windows = L"RedLava Launcher";
	Engine();
	std::string focud_windows = "";
	void render(sf::RenderWindow &window);
	void ivent(sf::Event &event, sf::RenderWindow& window);
};

