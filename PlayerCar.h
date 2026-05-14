#pragma once
#include "Car.h"
#include <vector>
class PlayerCar : public Car {
private:
 std::vector<float> lanes;
 int currentLane;
 float y;
public:
 PlayerCar(Texture& texture) {
sprite.setTexture(texture);
 sprite.setScale(0.35f, 0.35f);
 FloatRect bounds = sprite.getLocalBounds();
 sprite.setOrigin(bounds.width / 2, bounds.height / 2);
 lanes = {150, 400, 650};
 currentLane = 1;
 y = 500;
 sprite.setPosition(lanes[currentLane], y);
 }
 void moveLeft() {
 if (currentLane > 0) {
 currentLane--;
 sprite.setPosition(lanes[currentLane], y);
 }
 }
 void moveRight() {
 if (currentLane < 2) {
 currentLane++;
 sprite.setPosition(lanes[currentLane], y);
 }
 }
 void move(float dt) override {
 }
};
 
