#include <iostream>
#include "Url.h"
#include "Url.cpp"


int main(){

    std::string url;

    std::cout << "Enter URL here: ";
    std::cin >> url;
    std::cout << "\n";

    url_braker(url);

    return 0;
}
