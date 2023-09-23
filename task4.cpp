#include<iostream>
using namespace std;
main(){
         float Imposter;
         float Player;
         int Chance;
         cout << "Enter Imposter Count: ";
         cin >> Imposter;
         cout << "Enter Player Count: ";
         cin >> Player;
         Chance = 100*(Imposter/Player);
         cout << "Chance of being an imposter: "<<Chance<<"%";
}
