#include<iostream>
using namespace std;
int main(){
   int a = 'a';   // ascii value of character 'a' is stored in the a variable 
   cout<< a << "\n"; 
   char ch = 98;  // character on ascii value 98 is stored in the ch variable
   cout<< ch << "\n"; 
   char ch1 = 123456; // implicit overload only first byte is stored 
   cout<< ch1 <<"\n";  // in this case 1st byte says 64 so character at 64 is @

}
