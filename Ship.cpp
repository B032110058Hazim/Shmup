#include "Ship.h"

Ship::Ship()
{
    if (texture.loadFromFile("./Assets/Sprites/Spaceship.png"))
    {
        sprite.setTexture(texture);
    }
}

void Ship::run()
{
}

void Ship::draw(sf::RenderWindow& rw)
{
    rw.draw(this->sprite);
}
