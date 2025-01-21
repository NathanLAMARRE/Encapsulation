#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "Ennemy.h"

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 800;

int main() {

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Game");
	Player p(50, 50, "asset//banane pix.png", 0.05, 3);
    Ennemy e(20, 20, "asset//ananas.jpg", 0.05, 3);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close(); // Fermer la fenêtre
        }
        p.handlInput();
        window.clear();
        window.draw(p.sprite);
        window.draw(e.sprite);
        window.display();
    }



};