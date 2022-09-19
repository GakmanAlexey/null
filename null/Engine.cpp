#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

Engine::Engine() {

    /*
    Загрузка текстуры
    */
}

void Engine::render(sf::RenderWindow& window){
    window.clear();
    if (focud_windows == "") {
       // std::cout << "active 1" << std::endl;
    }
    else if (focud_windows == "act") {
        //std::cout << "act" << std::endl;
    }
    window.display();
};

void Engine::ivent(sf::Event& event, sf::RenderWindow& window) {
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed ||
            (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
            window.close();
    }
};
