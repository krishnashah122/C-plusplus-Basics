#include<iostream>
using namespace std;
void Reverse(string word){
    string key = word,str;
    int len = word.length() - 1;
    while(len>=0){
        str = str + word[len];
        len--;
    }
    cout<<"The reversed string is "<<str<<endl;
}
int main(){
    string letter;
    cout<<"Enter a String ";
    cin>>letter;
    Reverse(letter);
    return 0;
}