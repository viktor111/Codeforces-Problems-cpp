#include <string>
#include<stdio.h>
#include<iostream>

using std::cout;
using std::string;
using std::cin;
using std::strcat;
using std::endl;

int main(){

    int oneCounter = 0;
    int twoCounter = 0;
    int threeCounter = 0;

    char input[100];

    cin >> input;
    
    int len = strlen(input);

    for(int i = 0; i < len; i++){

        char element = input[i];

        if(element == '1'){
            oneCounter++;
        }
 
        if(element == '2'){
            twoCounter++;
        }

        if(element == '3'){
            threeCounter++;
        } 
    } 


    string output;

    for(int i = 0; i < oneCounter; i++){
        output += "1+";
    }

    for(int i = 0; i < twoCounter; i++){
        output += "2+";
    }

    for(int i = 0; i < threeCounter; i++){
        output += "3+";
    }

    output.pop_back();
    cout << output;
}     
