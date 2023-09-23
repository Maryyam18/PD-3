#include<iostream>
using namespace std;
main(){
      string name;
      float adult_ticket_price;
      float child_ticket_price;
      float number_of_adult_sold;
      float number_of_child_sold;
      float percentage_donated;
      float total_amount;
      float donation;
      float remaining;
      cout << "Enter the movie name: ";
      cin >> name;
      cout << "Enter the adult ticket price: $";
      cin >> adult_ticket_price;
      cout << "Enter the child ticket price: $";
      cin >> child_ticket_price;
      cout << "Enter the number of adult tickets sold: ";
      cin >> number_of_adult_sold;
      cout << "Enter the number of child tickets sold: ";
      cin >> number_of_child_sold;
      cout << "Enter the percentage of the amount to be donated to charity: ";
      cin >> percentage_donated;
      total_amount = (adult_ticket_price*number_of_adult_sold)+(child_ticket_price*number_of_child_sold);  
      donation = total_amount/percentage_donated;
      remaining = total_amount-donation; 
      cout <<                      endl;   
      cout << "Movie: "<<name <<endl;
      cout << "Total amount generated from ticket sales: $" <<total_amount <<endl;
      cout << "Donation to charity (10%): $" <<donation <<endl;
      cout << "Remaining amount after donation: $" <<remaining;
}
       