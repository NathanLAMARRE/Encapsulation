#include "ChaserEnemy.h"
#include "Player.h"

Chaser::Chaser(int x, int y, std::string texturePath, float vit, int _vie) : Enemy(x, y, _vie, vit) {
	vitesse = vit;
	pos_x = x;
	pos_y = y;

	Texture texture;
	texture.loadFromFile(texturePath);
	sprite.setTexture(texture);
	sprite.setScale(0.08, 0.08);
	sprite.setPosition(200, 505);
}

void Chaser::update(const Player& Player) {
    // Obtenir la position du joueur
    sf::Vector2f PlayerPos = Player.sprite.getPosition();
    sf::Vector2f ChaserEnemyPos = sprite.getPosition();

    // Calculer la direction du joueur vers l'ennemi
    sf::Vector2f direction = PlayerPos - ChaserEnemyPos;

    // Normaliser la direction pour éviter que l'ennemi se déplace trop rapidement
    float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);
    if (length != 0) {
        direction /= length;  // Normalisation
        sprite.move(direction * vitesse);  // Déplacer l'ennemi vers le joueur
    }
}


