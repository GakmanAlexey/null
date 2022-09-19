#include <SFML/Graphics.hpp>

#include "F.h"
#include "Engine.h"
#include "CFG.h"

#include <vector>
#include <iostream>

using namespace std;
int main()
{
    CFG cfg;
    Engine Eng;
    sf::RenderWindow window(sf::VideoMode(cfg.windows_x, cfg.windows_y), cfg.windows_name, sf::Style::None);
    while (window.isOpen())
    {
        sf::Event event;
        Eng.ivent(event, window);
        Eng.render(window);

    }
    
    return 0;
}