#include <exception>
#define ERRMSG "Not a triangle"

const int MAX = 200;
const int MIN = 1;
const int NOM = (MAX + MIN) / 2;

enum class TriangleType
{
    SCALENE,        // A triangle is a polygon with three edges and three vertices
    ISOSCELES,      // A triangle that has two sides of equal length
    EQUILATERAL     // A triangle in which all three sides are equal
};

class TriangleException: public std::exception {
public:
    virtual const char* what() const throw()
    {
        return ERRMSG;
    }
};

class Triangle {

public:
    TriangleType IsATriangle(int a, int b, int c);
};
