// Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space

#include <iostream>
#include <string>
using namespace std;
void Capitalizer(string str){
    for(int i=0; i<str.size(); i++){
        if(i==0){
            str[i] = toupper(str[i]);
        }else if(str[i] == ' '){
            str[i+1] = toupper(str[i+1]);
        }
    }
    cout << str << endl;
}
int main(){
    string str;
    cout << "Enter the string ";
    getline(cin, str);
    Capitalizer(str);
    return 0;
}