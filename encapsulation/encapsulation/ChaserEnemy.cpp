#include "ChaserEnemy.h"

Chaser::Chaser(int x, int y, std::string texturePath, float vit, int _vie) : Enemy(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;

	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.01, 0.01);
	sprite.setPosition(500, 500);
};



