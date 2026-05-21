#pragma once
#include <SFML/Graphics.hpp>
class Bird {
public:
 sf::Sprite sprite;
 float velocity
float gravity;
 float flapStrength;
static const float RENDER_W;
 static const float RENDER_H;
Bird(sf::Texture& texture, float startX, float startY) {
 velocityY = 0.f;
 gravity = 1000.f;
 flapStrength = -380.f;
 sprite.setTexture(texture);

