// numbers divisible by 3 and 5 between 100-500
#include<iostream>
using namespace std;
int main(){
    int counter = 100;
    while (counter <= 500){
        if (counter % 3 == 0 && counter % 5 == 0)
        cout<<counter <<" is didvisible by 3 & 5"<<endl;
        counter ++; 
    }
}