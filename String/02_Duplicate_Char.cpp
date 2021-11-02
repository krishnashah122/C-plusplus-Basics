#include<iostream>
#include<string>
using namespace std;
void DuplicateFind(string str){
    string duplicates = "";
    int count = 0;
    for(int i=0; i<str.size(); i++){
        for(int j=i+1; j<str.size(); j++){
            if(str[i] == str[j]){
                duplicates = duplicates + str[i];
                count++;
            }
        }
    }
    if(count > 0){
        cout << "The duplicate characters are " << duplicates << endl;
    }else{
        cout << "There is no any duplicate characters in the string" << endl;
    }
}
int main(){
    string str;
    cout << "Enter the string ";
    cin >> str;
    DuplicateFind(str);
    return 0;
}