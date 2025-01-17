#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Entity {
private:
	int vie;

public:
	virtual void update(float deltaTime) = 0;
	virtual void draw(sf::RenderWindow& window) = 0;
};