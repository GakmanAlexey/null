#include <SFML/Graphics.hpp>
#include "F.h"
#include "Engine.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    
    Engine Eng;
    sf::RenderWindow window(sf::VideoMode(1200, 800), "RedLava Launcher", sf::Style::None);
    while (window.isOpen())
    {
        sf::Event event;
        Eng.ivent(event, window);
        Eng.render(window);

    }
    
    return 0;
}