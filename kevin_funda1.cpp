#include <iostream>

using namespace std;

bool Numeric(string str){
	
   for (int i = 0; i < str.length(); i++){
   	
    if (isdigit(str[i]) == false){
 	
        return false; 
        return true;
	}
    }  
}

int main(){
	
   string str;
   
   cout << "Enter a value : ";
   cin >> str;
   
   if (Numeric(str))
      cout << "This is Numeric" << endl;
   else
      cout << "This is Not Numeric";
}
