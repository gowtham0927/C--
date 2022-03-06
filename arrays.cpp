#include<iostream>
using namespace std;

//input from user and find the average savings and 24 months average savings;

//int main(){
//	float month[10];
//	for(int i=0; i < 10; i++){
//		cout<<"Enter amount of Month " <<i+1 <<":";
//		cin>>month[i];
//		//cout<<endl;
//	}
//	// without taking input from user.
////	cin>>month[0];
////	cin>>month[1];
////	cin>>month[2];
////	cin>>month[3];
////	cin>>month[4];
////	cin>>month[5];
////	cin>>month[6];
////	cin>>month[7];
////	cin>>month[8];
////	cin>>month[9];
//	float total = month[0] + month[1] + month[2] + month[3] + month[4] + month[5] + month[6] + month[7] + month[8] + month[9];
//	float average = total / 10;
//	float twoyears = average * 24;
//	cout<<"Total: "<<total<<"\n";
//	cout<<"Average: "<<average<<"\n";
//	cout<<"Two Years average: "<<twoyears;
//	
//}

// instead of doing hardcode for total we will introduce loop in it for better way.
int main(){
	float month[10];
	float total = 0;
	for(int i=0; i < 10; i++){
		cout<<"Enter amount of Month " <<i+1 <<":";
		cin>>month[i];
		total += month[i];
	}
	float average = total / 10;
	float twoyears = average * 24;
	cout<<"Total: "<<total<<"\n";
	cout<<"Average: "<<average<<"\n";
	cout<<"Two Years average: "<<twoyears;
	
}
