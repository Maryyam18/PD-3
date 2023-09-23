#include<iostream>
using namespace std;
main(){
       int number;
       int sum;
       cout << "Enter a 4-digit number: ";
       cin >> number;
       int a;
       a = number%10;
       int b;
       b = number/10;
       int c;
       c = b%10;
       int d;
       d = b/10;
       int e;
       e = d%10;
       int f;
       f = d/10;
       sum = a+c+e+f;
       cout << "Sum of the individual digits: "<<sum;
       
       
}
    