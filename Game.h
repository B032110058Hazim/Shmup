#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Ship.h"

class Game
{
public:
    Game();
    void play();

private:
    void process();
    void render();

private:
    sf::VideoMode video;
    sf::RenderWindow window;
    sf::Event event;

    std::vector<Entity*> entities;
};

