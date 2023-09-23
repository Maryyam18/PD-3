#include<iostream>
using namespace std;
main(){
        float minutes;
        float per_second;
        float total;
        cout << "Number of Minutes: ";
        cin >> minutes;
        cout << "Frames per Second: ";
        cin >> per_second;
        total = (minutes*per_second)*60;
        cout << "Total Number of Frames: " <<total;
} 
         