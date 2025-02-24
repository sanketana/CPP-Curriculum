#include <SFML/Graphics.hpp>

int main() {
  // Create a game window
  sf::RenderWindow window(sf::VideoMode(800, 600), "Pong Game");

  // Create paddles and ball
  sf::RectangleShape player1(sf::Vector2f(10, 100));
  player1.setPosition(50, 250);
  player1.setFillColor(sf::Color::Red);

  sf::RectangleShape player2(sf::Vector2f(10, 100));
  player2.setPosition(740, 250);
  player2.setFillColor(sf::Color::Blue);

  sf::CircleShape ball(10);
  ball.setPosition(400, 300);
  ball.setFillColor(sf::Color::White);

  // Ball speed
  float ballSpeedX = 0.3f;
  float ballSpeedY = 0.3f;

  // Game loop
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Player 1 Controls (W and S keys)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&
        player1.getPosition().y > 0)
      player1.move(0, -0.4f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
        player1.getPosition().y < 500)
      player1.move(0, 0.4f);

    // Player 2 Controls (Up and Down arrow keys)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) &&
        player2.getPosition().y > 0)
      player2.move(0, -0.4f);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) &&
        player2.getPosition().y < 500)
      player2.move(0, 0.4f);

    // Ball Movement
    ball.move(ballSpeedX, ballSpeedY);

    // Collision with top and bottom walls
    if (ball.getPosition().y <= 0 || ball.getPosition().y >= 590)
      ballSpeedY = -ballSpeedY;

    // Collision with paddles
    if (ball.getGlobalBounds().intersects(player1.getGlobalBounds()) ||
        ball.getGlobalBounds().intersects(player2.getGlobalBounds()))
      ballSpeedX = -ballSpeedX;

    // Reset ball if it goes off-screen
    if (ball.getPosition().x < 0 || ball.getPosition().x > 800)
      ball.setPosition(400, 300);

    // Clear and draw
    window.clear();
    window.draw(player1);
    window.draw(player2);
    window.draw(ball);
    window.display();
  }

  return 0;
}