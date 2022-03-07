#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char op;
    cout<<"Calculator App"<<endl;
    cout<<"You can perform any of these operations (+,-,*,%,/)"<<endl;

    cout<<"Enter Number1: ";
    cin>>num1;

    cout<<"Enter operand: ";
    cin>>op;

    cout<<"Enter Number2: ";
    cin>>num2;

    switch(op){
        case '+':
        cout<<num1 <<op <<num2 << "=" <<num1+num2;
        break;
        case '-':
        cout<<num1 <<op <<num2 << "=" <<num1-num2;
        break;
        case '*':
        cout<<num1 <<op <<num2 << "="<<num1*num2;
        break;
        case '/':
        cout<<num1 <<op <<num2 <<"=" <<num1/num2;
        break;
        case '%':
           bool num1Int, num2Int;
           num1Int=((int)num1 == num1);
           num2Int =((int)num2 == num2);
        if(num1Int&num2Int)
        cout<<num1 <<op <<num2 <<"="<<(int)num1 % (int)num2;
        else
        cout<<"Invalid!!!!!!";
        break;
        default:
        cout<<"Invalid operand";
    }

}