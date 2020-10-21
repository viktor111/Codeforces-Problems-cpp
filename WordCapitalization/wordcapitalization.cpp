#include<stdio.h>
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string word;

    cin >> word;

    word[0] = toupper(word[0]); 

    cout << word;
}
    
