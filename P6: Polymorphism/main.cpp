#include<iostream>
#include<math.h>


class Rectangle {
    private:
        double _width;
        double _height;
    public:
        Rectangle(double width, double height);
        double area() const;
};

class Square {
    private:
        double _side;
    public:
        Square(double side); 
        double area() const;
};

class Circle {
    private:
        double _radius;
    public:
        Circle(double radius); 
        double area() const;
};

void printArea(const Shape& shape) {
    std::cout << shape.area() << "\n";
} 

int main(){
    Rectangle r1{ 3.0, 5.0 }; 
    Square s1{ 4.0 }; 
    Circle c1{ 10.0 }; 

    printArea(r1); 
    printArea(s1); 
    printArea(c1); 
}

Rectangle::Rectangle(double width, double height){
    _width = width;
    _height = height;
}

double Rectangle::area() const{
    return _width * _height;
}

Square::Square(double side){
    _side = side;
}

double Square::area() const{
    return _side * _side;
}

Circle::Circle(double radius){
    _radius = radius;
}

double Circle::area() const{
    return (_radius * _radius) * M_PI;
}
