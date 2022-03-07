// count digiys of a number.
#include<iostream>
using namespace std;
int main(){
    int number;
    
    cout<<"Enter any number: ";
    cin>>number;
    if(number==0)
    cout<<"Number entered is zero.";
    
    else{
        int counter = 0;
        if(number < 0)
         
        number= -1 * number;
        while(number>0){
            number /= 10;
        counter++;
        }
        cout<<"Number Contains "<<counter<<" digits.";
    }
    
}