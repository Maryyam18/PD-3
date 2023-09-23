#include<iostream>
using namespace std;
main(){
        float Initial;
        float Acceleration;
        float Time;
        float Final;
        cout << "Enter Initial Velocity (m/s): ";
        cin >> Initial;
        cout << "Enter Acceleration (m/s^2): ";
        cin >> Acceleration;
        cout << "Enter Time (s): ";
        cin >> Time;
        Final = Acceleration*Time+Initial;
        cout << "Final Velocity (m/s): " <<Final;
}