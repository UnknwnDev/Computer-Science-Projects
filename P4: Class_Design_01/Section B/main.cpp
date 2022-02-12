#include <iostream>

#include "image.cpp"
#include "image.h"


int main(){

    Image img{ "Icon.png", "PNG", "10/25/2004", 10, "Samuel Mbugua", 64, 64, "f/22", "1/1000", 3000, false };
    print_image_metadata(img);

    return 0;
}
