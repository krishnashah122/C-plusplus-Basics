// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)

#include<iostream>
#include<string>
using namespace std;
void CharChanger(string str){
    for(int i=0; i<str.size(); i++){
        str[i] = int (str[i]+1);
    }
    cout << str << endl;
}
int main(){
    string str;
    cout << "Enter any string ";
    cin >> str;
    CharChanger(str);
    return 0;
}