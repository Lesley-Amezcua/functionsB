//Name: Lesley Amezcua
//Date: October 14, 2015
//Description:Functions B

#include <iostream>
#include <cassert>
using namespace std;

const double PI = 3.1415;

//convert feet to inches
double ftToInches(double val);
void feetToInches(double& val);

//calculate area
double computeRectangle(double valA, double valB);
void computerArea (double valA, double valB, double& valC);

//calculate area, perimeter.
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

//returns the average, sum of the four parameters that are passed to it
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

//calculates area, perimeter of a circle.
void calcAreaPerimeter(double radius, double& area, double& perimeter);

//calculates area of a rectangle.
double calcArea(double length, double width);

int main()
{
    //variables for feetToInches (void) Tests

    double feet = 10;
    double area = 0;

    //variables for Tests

    double a1 = 2;
    double b1 = 6;
    double a2 = 5;
    double b2 = 5;
    double a3 = 9;
    double b3 = 7;

    //variables for pass by reference
    double A = 0;
    double B = 0;


    assert(ftToInches(12) == 144);
    assert(ftToInches(4) == 48);
    assert(ftToInches(0) == 0);

    assert(computeRectangle(1.0, 7.0) == 7.0);
    assert(computeRectangle(5.0, 5.0) == 25.0);
    assert(computeRectangle(8.0, 8.0) == 64.0);

    assert(calcArea(2,7) == 14);
    assert(calcArea(11,3) == 33);
    assert(calcArea(2.5,39.2) == 98);


    //Test for void feetToInches

    feetToInches(feet);
    feetToInches(feet);
    feetToInches(feet);

    //Test for void computeArea

    computerArea(a1, b1, A);
    computerArea(a2, b2, A);
    computerArea(a3, b3, A);

    //Test for void computerArea

    computerArea(a1, b1, A, B);
    computerArea(a2, b2, A, B);
    computerArea(a3, b3, A, B);

    //Test for void stats

    stats(1.0, 2.0, 3.0, 4.0, A, B);
    stats(2.0, 4.0, 6.0, 8.0, A, B);
    stats(1.2, 2.0, 30.0, 40.0, A, B);

    //Test for void calcAreaPerimeter

    calcAreaPerimeter(a1, A, B);
    calcAreaPerimeter(a2, A, B);
    calcAreaPerimeter(a3, A, B);


    cout << "End of program." << endl << endl;

return 0;
}

double ftToInches(double val)
{
    double result;

    result = val * 12;

    return result;
}

void feetToInches(double& val)
{ 
    cout << "Expected inches: " << val * 12 << endl;

    val = val * 12;

    cout << "Inches: " << val << endl << endl;

return;
}

double computeRectangle(double valA, double valB)
{
    double area;

    area = valA * valB;

    return area;
}

void computerArea (double valA, double valB, double& valC)
{
    valC = valA * valB;

    cout << endl << "Expected area : " << valA * valB << endl
         << "Area: " << valC << endl << endl;

    return;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    cout << "Expected Area: " << valA * valB << endl;

    valArea = valA * valB;

    cout << "Area: " << valArea << endl
         << "Expected Perimeter : " << 2 * (valA + valB) << endl;

    valPerimeter = 2 * (valA + valB);

    cout << "Perimeter: " << valPerimeter << endl << endl;

    return;
}

void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD) / 4;
    valF = (valA + valB + valC + valD);

    cout << "Expected average: " << (valA + valB + valC + valD ) / 4 << endl
<< "Average: " << valE << endl
<< "Expected sum: " << valA + valB + valC + valD << endl
<< "Sum: " << valF << endl << endl;

return;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    cout << "Expected area: " << PI * radius * radius << endl
    << "Area: " << area << endl
    << "Expected perimeter: " << 2 * PI * radius << endl
    << "Perimeter: " << perimeter << endl << endl;

return;
}

double calcArea(double length, double width)
{
    double area = length * width;

    return area;
}
