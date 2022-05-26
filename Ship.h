#pragma once
#include "Entity.h"

class Ship : public Entity
{
private:
	sf::Texture texture;
	sf::Sprite sprite;

public:
	Ship();
	virtual void run() override;
	virtual void draw(sf::RenderWindow& rw) override;
};

