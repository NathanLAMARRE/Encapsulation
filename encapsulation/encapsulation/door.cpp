#include "door.h"

Door::Door(float size, sf::Color color, float x, float y)
{
    shape.setSize(sf::Vector2f(20, 100));
    shape.setFillColor(color);
    shape.setPosition(1905, 850);
}
void Door::draw(sf::RenderWindow& window)
{
    window.draw(shape);  
}

void Door::setPosition(float x, float y)
{
    shape.setPosition(x, y);  
}