// Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string

#include <iostream>
#include <string>
using namespace std;
void SortChar(string str){
    char temp = ' ';
    for(int i=0; i<str.length(); i++){
        for(int j=i+1; j<str.length(); j++){ 
            if(int(str[i]) > int(str[j])){
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    cout << "The sorted string is " << str << endl;
}
int main(){
    string str;
    cout << "Enter a string ";
    getline(cin,str);
    SortChar(str);
    return 0;
}