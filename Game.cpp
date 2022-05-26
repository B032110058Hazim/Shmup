#include "Game.h"

Game::Game():
    video(720, 1080),
    window(this->video, "Shmup")
{
    Ship* s = new Ship();
    entities.push_back(s);
}

void Game::play()
{
    while (window.isOpen())
    {
        process();
        render();
    }
}

void Game::process()
{
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    for (Entity* e : entities)
        e->run();
}

void Game::render()
{
    window.clear();

    for(Entity* e : entities)
        e->draw(window);

    window.display();
}
