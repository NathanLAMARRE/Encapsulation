#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Enemy.h"

class Patrolling : public Enemy {
public:
	Patrolling(int x, int y, std::string texturePath, float vit, int _vie, int timeSinceDirectionChange = 0);
	void handlInput() {}
	void update(float deltaTime) override {}
	void draw(sf::RenderWindow& window) override {}
};