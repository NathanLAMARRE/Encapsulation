#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Player.h"

class Player; class Entity {
protected:
	int pos_x, pos_y;
	int vitesse;

public:
	void handlInput() {}
	void update(float deltaTime) {}
	void draw(sf::RenderWindow& window) {
		sf::RectangleShape shape(100);
		shape.setFillColor(sf::Color::White);
	}
	void deplacement(Entity Personnage) {
		if (sf::Keyboard::isKeyPressed(sf::KeyPressed::Q) && Personnage->getPosition().x > 0) {

		}
		if (sf::Keyboard::isKeyPressed(sf::KeyPressed::S) && Personnage->getPosition().x + Personnage->getGlobalBounds().height < WINDOW_WIDTH) {
			Personnage->move(0, vitesse);
		}
		if (sf::Keyboard::isKeyPressed(sf::KeyPressed::Z) && Personnage->getPosition().y > 0) {

		}
		if (sf::Keyboard::isKeyPressed(sf::KeyPressed::S) && Personnage->getPosition().y + Personnage->getGlobalBounds().height < WINDOW_HEIGHT) {
			Personnage->move(0, vitesse);
		}
	}

};