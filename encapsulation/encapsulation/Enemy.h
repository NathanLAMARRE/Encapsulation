#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class Enemy: Entity{
public:
	int vie;
	int pos_x, pos_y;
	float vitesse;

	Sprite sprite;
	Enemy(int x, int y, int _vie, float _vitesse);
	virtual void update(float deltaTime) = 0;
	virtual void draw(sf::RenderWindow& window) = 0;
};