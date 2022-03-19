#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Utility.cpp"
#include "Car.h"
#include "Car.cpp"

bool anyPrime(const std::vector<int>& values);

int main() {
    auto integers = randomIntegers();
    std::cout << "Integers: " << integers << "\n";
    std::cout << "Are there any primes? " << (anyPrime(integers) ? "yes" : "no") << "\n";
}

bool anyPrime(const std::vector<int>& values) {
    // TODO: return true if any of the values are prime numbers
    auto result = false;
     for (int i = 2; i < values.size(); i++){
        if (values[i] % i == 1)
            result = true;
     }

   return result;
}