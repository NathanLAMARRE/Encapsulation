#include "Player.h"

Player::Player(int x, int y, std::string texturePath, float vit, int _vie) : Entity(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;
	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.011, 0.011);
	sprite.setPosition(1, 1);
};

void Player::draw(sf::RenderWindow& window) {
	window.draw(sprite);
}
void Player::handlInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && sprite.getPosition().x + sprite.getGlobalBounds().width < 1920) {
		sprite.move(vitesse, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sprite.getPosition().y + sprite.getGlobalBounds().height < 1080) {
		sprite.move(0, vitesse);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && sprite.getPosition().x + sprite.getGlobalBounds().width > 10) {
		sprite.move(-vitesse, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && sprite.getPosition().y + sprite.getGlobalBounds().height > 10) {
		sprite.move(0, -vitesse);
	}
}
void Player::update(float deltaTime){
};
