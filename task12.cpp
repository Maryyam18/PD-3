#include<iostream>
using namespace std;
main() {
           int square_meters;
           int width;
           int height; 
           int number_of_walls;
           cout << "Number of square meters you can paint: ";
           cin >> square_meters;
           cout << "Width of the single wall (in meters): ";
           cin >> width;
           cout << "Height of the single wall (in meters): ";
           cin >> height;
           number_of_walls = square_meters/(width*height);
           cout << "Number of walls you can paint: "<<number_of_walls;
}