#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"

class Player; class Entity {
private:
	int pos_x, pos_y;
	int vitesse;

public:
	void handlInput(){}
	void update(float deltaTime) {}
	void draw(sf::RenderWindow& window) {}

	void deplacement(Entity Personnage) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q) && Personnage->getPosition().x > 0) {

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) && Personnage->getPosition().x + Personnage->getGlobalBounds().height < WINDOW_WIDTH) {
			Personnage->move(0, vitesse);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z) && Personnage->getPosition().y > 0) {

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) && Personnage->getPosition().y + Personnage->getGlobalBounds().height < WINDOW_HEIGHT) {
			Personnage->move(0, vitesse);
		}
	}
};
