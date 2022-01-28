#include<iostream>
#include<string>

int main(){

    // Basic for loop with for FizzBuzz problem
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0){
            std::cout << "FizzBuzz\n";
        } else if (i % 5 == 0 || i % 3 == 0){
            std::string result = (i % 3 == 0) ? "Fizz\n": "Buzz\n";
            std::cout << result;
        } else {
            std::cout << i << "\n";
        }
    }
    
    return 0;
}