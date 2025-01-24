#include "PatrollingEnemy.h"

Patrolling::Patrolling(int x, int y, std::string texturePath, float vit, int _vie, int timeSinceDirectionChange ) : Enemy(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;

	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.06, 0.06);
	sprite.setPosition(225, 225);

	sf::Vector2f direction(0.f, -vit);

		timeSinceDirectionChange++;

		if (timeSinceDirectionChange > 1)
		{
			timeSinceDirectionChange = 0;

			if (direction == sf::Vector2f(0.f, -vit)) {
				direction = sf::Vector2f(vit, 0.f);  // Droite
			}
			else if (direction == sf::Vector2f(vit, 0.f)) {
				direction = sf::Vector2f(0.f, vit);  // Bas
			}
			else if (direction == sf::Vector2f(0.f, vit)) {
				direction = sf::Vector2f(-vit, 0.f); // Gauche
			}
			else if (direction == sf::Vector2f(-vit, 0.f)) {
				direction = sf::Vector2f(0.f, -vit); // Haut
			}
		}
		sprite.move(direction);
    
};