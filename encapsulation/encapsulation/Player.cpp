#include "Player.h"



Player::Player(int x, int y, std::string texturePath, float vit, int _vie) : Entity(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;
	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.005, 0.005);

};

void Player::draw(sf::RenderWindow& window) {
	window.draw(sprite);
}
void Player::handlInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && sprite.getPosition().y > 0) {
		sprite.move(vitesse, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && sprite.getPosition().y + sprite.getGlobalBounds().height < 800) {
		sprite.move(0, vitesse);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && sprite.getPosition().y > 0) {
		sprite.move(-vitesse, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && sprite.getPosition().y + sprite.getGlobalBounds().height < 800) {
		sprite.move(0, -vitesse);
	}
}
void Player::update(float deltaTime){
};
