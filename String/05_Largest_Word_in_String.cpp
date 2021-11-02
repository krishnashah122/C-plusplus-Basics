// Write a C++ program to find the largest word in a given string

#include <iostream>
#include <string>
using namespace std;
void WordCounter(string str){
    int count = 0;
    int temp, maxWord = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' '){
            temp = count;
            maxWord = max(maxWord,temp);
            count = 0;
        }else {
            count++;
        }
    }
    temp = count;
    maxWord = max(maxWord,temp);
    cout << "The largest word in the string is " << maxWord << endl;
}
int main(){
    string str;
    cout << "Enter a sentence ";
    getline(cin,str);
    WordCounter(str);
    return 0;
}