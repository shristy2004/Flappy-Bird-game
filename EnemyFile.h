#pragma once
#include "Car.h"
class EnemyCar : public Car {
private:
 float speed;
 int laneIndex;
public:
 EnemyCar(Texture& texture, float x, int lane) {
 sprite.setTexture(texture);
 sprite.setScale(0.35f, 0.35f);
