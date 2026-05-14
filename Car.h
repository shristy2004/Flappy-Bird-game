#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Car {
protected:
 Sprite sprite;
public:
 virtual void move(float dt) = 0;
 Sprite& getSprite() {
 return sprite;
 }
};

