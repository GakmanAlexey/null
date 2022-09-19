#include <SFML/Graphics.hpp>
#include "F.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    F f;
    std::vector<std::string> res;
    res = f.spl("rewr•wer•sdf");
    int i = 0;
    while (i < res.size()) {
        std::cout << res[i] << std::endl;
        i++;
    }
    
    /*
    // Создаем главное окно приложения
    sf::RenderWindow window(sf::VideoMode(1200, 800), "Pong", sf::Style::None);

    // Главный цикл приложения
    while (window.isOpen())
    {
        // Обрабатываем события в цикле
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Кроме обычного способа наше окно будет закрываться по нажатию на Escape
            if (event.type == sf::Event::Closed ||
                (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }

        // Очистка
        window.clear();
        // Тут будут вызываться функции обновления и отрисовки объектов
        // Отрисовка
        window.display();
    }
    */
    return 0;
}