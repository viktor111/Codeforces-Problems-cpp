#include<stdio.h>
#include<iostream>

using std::cout;
using std::cin;

int main(){
   int w;

   cin >> w;

   if(w % 2 == 0 && w > 2){
       cout << "YES";
   }
   else{
      cout << "NO"; 
   }
}
