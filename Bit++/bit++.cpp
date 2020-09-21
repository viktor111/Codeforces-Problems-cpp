#include<stdio.h>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int x = 0;

    int n; 

    cin >> n;

    for(int i = 0; i < n; i++){

        char command[4];

        cin >> command;
        
        if(command[1] == '-'){
            x--;
        }
        
        if(command[1] == '+'){
            x++;
        }
    }

    cout << x;

}
    
