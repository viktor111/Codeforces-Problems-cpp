#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
    int words_count;

    cin >> words_count;

    for(int i = 0; i < words_count; i++){
        string word;

        cin >> word;
        
        int chars_count = word.length();

        if (chars_count > 10){

            char first_char = word[0];
            char last_char = word[word.length() - 1];

            cout << first_char << chars_count - 2 << last_char << endl;
        }
        else{
            cout << word << endl;
        }
           

    }
}
    
