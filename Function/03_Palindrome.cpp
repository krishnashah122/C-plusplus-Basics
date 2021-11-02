#include<iostream>
using namespace std;
void Palindrome(int n){
    int key=n,number=0;
    while(n>0){
        int rem = n%10;
        number = number*10 + rem;
        n = n/10;
    }
    if(number==key){
        cout<<"The number is Palindrome"<<endl;
    }
    else{
        cout<<"The number is not Palindrome"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Palindrome(num);
    return 0;
}