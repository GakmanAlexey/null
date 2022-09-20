#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "load.h"
#include "F.h"

using namespace sf;

Engine::Engine() {
    LD.font();
    LD.img();
    LD.texturs();
    /*
    Загрузка текстуры
    */
}

void Engine::render(sf::RenderWindow& window){
    window.clear();
    if (focud_windows == "") {
        F f;
        sf::Sprite Sprite_def;
        window.draw(f.show_F(Sprite_def, LD.Texturs_fonL, 0, 0));

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
