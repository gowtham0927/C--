// ATM application

#include<iostream>
using namespace std;

void Menu(){
    cout<<"**************MENU******************"<<endl;
    cout<<"1. check Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"*********************************"<<endl;
}


int main(){
   int option;
   double balance = 500;
   do{
   Menu();
   cout<<"Option: ";
   cin >> option;
   system("cls");
   switch(option){
       case 1: cout<<"Balance is: "<<balance <<"Rs/-"<<endl;
       break;
       case 2: cout<<"Deposit amount: ";
       double depositAmount;
       cin>> depositAmount;
       balance += depositAmount;
       break;
       case 3: cout<<"Withdraw amount: ";
       double withdrawAmount;
       cin>> withdrawAmount;
       if(withdrawAmount<= balance)
       balance -= withdrawAmount;
       else
       cout<<"No enough money in account";
       break;
   }
   }while(option!=4);
   

}