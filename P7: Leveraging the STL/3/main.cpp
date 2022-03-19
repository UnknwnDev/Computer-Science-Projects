#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Utility.cpp"
#include "Car.h"
#include "Car.cpp"

int main() {
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    // TODO: print the average price and price range
    float average;
    float total; 
    float lowestPrice = 1000000000;
    float highestPrice = 0;
    for (auto car : cars){
        total += car.price();
        if (car.price() > highestPrice){
            highestPrice = car.price();
        }
        if (car.price() < lowestPrice){
            lowestPrice = car.price();
        }
    }
    average = total/cars.size();
    float range = highestPrice - lowestPrice;
    std::cout << "The average price is: $" << average << "\n";

    std::cout << "The range is: $" << range << "\n";
}