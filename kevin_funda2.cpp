#include<iostream>

using namespace std;

int main(){
	
	int arr[256],i;
	
	cout<<"leap year 2000 to 3000 : "<<endl;
	
	for(i=2000; i<=3000; i++){
		
		if(i%4==0){
			
			cout<<i;
		}
		cout<<"  ";
	}	
	return 0;
}
