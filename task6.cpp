#include<iostream>
using namespace std;
main(){
      int pounds;
      int cost;
      int area;
      int per_pound;
      int per_square;
      cout << "Enter the size of the fertilizer bag in pounds: ";
      cin >> pounds;
      cout << "Enter the cost of the bag: $";
      cin >> cost;
      cout << "Enter the area in square feet that can be covered by the bag: ";
      cin >> area;
      per_pound = cost/pounds;
      per_square = cost/area;
      cout << "Cost of fertilizer per pound: $" <<per_pound << endl;
      cout << "Cost of fertilizing per square foot: $" <<per_square;     
}
     