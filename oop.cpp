#include <iostream>
#include <cmath>

class Point {
    private:
    int x;
    int y;
    
    public:

    //Methods

    int getX () { return x; }
    void setX(int newX) { x = newX; }

    int getY () { return y; }
    void setY(int newY) { y = newY; }

    void print() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    double distanceTo(Point other) {
        int xDifference = x - other.x;
        int yDifference = y - other.y;
        return sqrt(xDifference * xDifference + yDifference * yDifference);
    }

    //Static
    
    //The Array is not so dynamic like the vector

    static void printSomePoints(Point points[], int length) {
        std::cout<< "We are going to print: " << length
                 << " Points are: " << std::endl;
        for (int i = 0; i < length; i++) {
             points[i].print();
        }
    }

    //Constructors
    
    Point() : x(0), y(0) {
        //A Point without parameters
        std::cout<<"Constructor has been invoked" << std::endl;
    }

    Point(int x, int y) : x(x), y(y) {
        //Every single time a point is created :O
        std::cout<< "This has two parametrs" << std::endl;
        
        //this->x = x;
        //this->y= y;
    }

    

};

class City {
    private:
        Point location;
        std::string name;
        int population;

    public:
        City() : location(Point()), name("Desconocido"), population(0) {}
        City(Point location, std::string name, int population) 
            : location(location), name(name) , population(population) {}
        Point& getLocation() { return location; }
        void setLocation(Point& location) {
            this->location = location;
        }
        std::string getName () {return name; }
        void setName (std::string name) {this->name = name;}

};

class XYZPoint : public Point {
    private:
    int z;

    public:
    XYZPoint(int x, int y, int z) : Point(x,y), z(z){ }
};
int main() {

}