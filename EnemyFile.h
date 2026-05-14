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
FloatRect bounds = sprite.getLocalBounds();
 sprite.setOrigin(bounds.width / 2, bounds.height / 2);
sprite.setPosition(x, -100);
speed = 200.0f;
 laneIndex = lane;
 }
void move(float dt) override {
 sprite.move(0, speed * dt);
 }
int getLane() const {
 return laneIndex;
 }
};

