#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Door {
public:
	Door(float size, sf::Color color, float x, float y);
	void draw(sf::RenderWindow& window);
	void setPosition(float x, float y);
private:
	sf::RectangleShape shape;
};
