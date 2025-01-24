#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Enemy.h"

class Chaser: public Enemy {
public:
	Chaser(int x, int y, std::string texturePath, float vit, int _vie);

	void handlInput() {}
	void update(const Player& player) override {}
	void draw(sf::RenderWindow& window) override {}
};