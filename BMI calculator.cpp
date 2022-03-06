#include<iostream>
using namespace std;
int main(){
	float height, weight, bmi;
	cout<<"Enter height in meters: ";
	cin>>height;
	cout<<"Enter weight in KG: ";
	cin>>weight;
	bmi = weight / (height * height);
	
	if(bmi < 18.5)
	 cout<<"Underweight!!  "<<endl;
	 else if (bmi>25)
	 cout<<"Oops overweight!"<<endl;
	 else
	 cout<<"Normal weight"<<endl;
	 
	cout<<"Your Bmi is: "<<bmi;	
}
