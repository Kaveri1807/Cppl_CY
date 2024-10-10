#include <iostream>
using namespace std;

//Base class shape
class shape{
    public:
        void Shape(){
           cout<<"This is a shape"<<endl;
        }
};

//Derived class Polygon (inheritance from shape)
class Polygon:public shape{
    public:
        void polygon(){
           cout<<"Polygon is a shape"<<endl;
        }
};

//Derived class Rectangle 
class rectangle:public Polygon{
    public:
        void Rectangle(){
           cout<<"Rectangle is a Polygon"<<endl;
        }
};

//Derived class Triangle
class triangle:public rectangle{
    public:
        void Triangle(){
           cout<<"Triangle is a polygon"<<endl;
        }
};

//Derived class Sqare
class square:public triangle{
    public:
        void Square(){
           cout<<"Square is a rectangle"<<endl;
        }
};

int main(){
    //Create an object of class square
    square mySquare;
    
    mySquare.Square();
    mySquare.Triangle();
    mySquare.Rectangle();
    mySquare.polygon();
    mySquare.Shape();
    
    return 0;
}
