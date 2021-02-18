#include <iostream>
using namespace std;
 
int main()
{
 int height;
 int width;
 int area;
 
 cout << "Enter the height of a rectangle: " << endl;
 cin >> height;
 
 cout << "Enter the width of a rectangle: " << endl;
 cin >> width;
 
 area = height * width;
 
 cout << "The area of the rectangle with the height " <<
   height << " and width " << width << " is " << area <<
   endl;
 
 return 0; 
}