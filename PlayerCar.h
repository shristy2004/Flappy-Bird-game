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
