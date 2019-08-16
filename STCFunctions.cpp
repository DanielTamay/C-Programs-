// File: stickFigure.cpp
// Draws a stick figure
#include <iostream>
using namespace std;
// Functions used . . .
void drawCircle(); // Draws a circle
void drawTriangle(); // Draws a triangle
void drawIntersect(); // Draws intersecting lines
void drawBase(); // Draws a horizontal line
int main()
{
// Draw a circle.
drawCircle();
// Draw a triangle.
drawTriangle();
// Draw intersecting lines.
drawIntersect();
return 0;
}
// Draws a circle
void drawCircle()
{
cout << " * " << endl;
cout << " * *" << endl;
cout << " * * " << endl;
} // end drawCircle
// Draws a triangle
void drawTriangle()
{
drawIntersect();
drawBase();
} // end drawTriangle
// Draws intersecting lines
void drawIntersect()
{
cout << " /\\ " << endl;
cout << " / \\ " << endl;
cout << " / \\" << endl;
} // end drawIntersect
// Draws a horizontal line
void drawBase()
{
cout << " _ _ _ _ _ _" << endl;
} // end drawBase
