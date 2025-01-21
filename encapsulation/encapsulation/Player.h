#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Player: public Entity {
public:
	Player(int x, int y, std::string texturePath, float vit, int _vie);

	void handlInput();
	void update(float deltaTime);
	void draw(sf::RenderWindow& window);
};