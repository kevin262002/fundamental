#include<iostream>

using namespace std;

int main(){
	
	int arr[5];
	int n,i;
	
	cout<<"Enter 5 Value : "<<endl;
	
	for(i=0; i<=4; i++){
		
		cin>>n;
		arr[i]=n;
	}
	
	for(i=0; i<=4; i++){
		
		cout<<arr[i];
		cout<<" ";
	}
	
	cout<<endl;
	
	int cube;
	
	for(i=0; i<=4; i++){
		
		n=arr[i];
		cube=n*n*n;
		
		cout<<"Cube off"<<arr[i]<<" : "<<cube<<endl;
	}
	
	return 0;	
}
