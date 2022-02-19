#include <iostream>
#include "Url.h"
#include "Url.cpp"


int main(){

    Url _url;
    std::string url = "";

    std::cout << "Enter URL here: ";
    std::cin >> url;
    std::cout << "\n";

    _url.url_braker(url);
    
    std::cout << _url << std::endl;
    
    return 0;
}
