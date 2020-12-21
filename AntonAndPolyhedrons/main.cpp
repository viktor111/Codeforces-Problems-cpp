#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    int final = 0;

    string input;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        
        if(input == "Tetrahedron"){
            final+= 4;
        }

        if(input == "Cube"){
            final += 6;
        }

        if(input == "Octahedron"){
            final+= 8;
        }

        if(input == "Dodecahedron"){
            final+= 12;
        }

        if(input == "Icosahedron"){
             final+= 20;
        }
    }

    cout << final; 

}
    
