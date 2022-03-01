//
//  main.cpp
//  Inheritance_basic
//
//  Created by wu yen sun on 2022/2/25.
//

#include <iostream>

// specialization
class Polygon
{
    protected:
        int numEdges;
        float xPos, yPos;
    public:
        void set(float x, float y, int nE);
};

class Rectangle : public Polygon
{
    public:
        float area();
};

class Triangle : public Polygon
{
    public:
        float area();
};

// enhancement
class Point
{
    protected:
        int x, y;
    public:
    void set (int a, int b);
};

class Circle : public Point
{
    private:
        double r;
};

class DDDPoint: public Point
{
    private:
        int z;
};




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
