#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Utility.cpp"
#include "Car.h"
#include "Car.cpp"

int main() {
    auto integers = randomIntegers();
    std::cout << "Initial: " << integers << "\n";

    // TODO: make the sequence a bitonic sequence
    std::sort(integers.begin(), integers.end());
    auto mid = integers.begin() + integers.size()/2;
    std::reverse(mid, integers.end());
    
    std::cout << "Bitonic: " << integers << "\n";
}
