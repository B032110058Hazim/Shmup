#pragma once
#include <SFML/Graphics.hpp>

class Entity
{
public:
	virtual void run() = 0;
	virtual void draw(sf::RenderWindow& rw) = 0;
};

