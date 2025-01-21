#include"Ennemy.h"

Ennemy::Ennemy(int x, int y, std::string texturePath, float vit, int _vie) : Entity(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;
	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.005, 0.005);
};

void Ennemy::draw(sf::RenderWindow& window) {
	window.draw(sprite);
}
