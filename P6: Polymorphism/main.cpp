#include<iostream>

class Shape{

};

class Rectangle{
    private:
        double _width;
        double _height;
    public:
        Rectangle(double width, double height);
};

class Square{
    public:
        Square(double size);  
};

class Circle{
    public:
        Circle(double radius);  
};

int main(){
    Rectangle r1{ 3.0, 5.0 }; 
    Square s1{ 4.0 }; 
    Circle c1{ 10.0 }; 

    // printArea(r1); 
    // printArea(s1); 
    // printArea(c1); 
    return 0;
}

Rectangle::Rectangle(double width, double height){
    
}

Square::Square(double size){

}

Circle::Circle(double radius){

}