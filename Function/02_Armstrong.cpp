#include<iostream>
#include<cmath>
using namespace std;
void Armstrong(int n){
    int key=n,number=0;
    while(n>0){
        int rem = n%10;
        number = number + pow(rem,3);
        n = n/10;
    }
    if(number==key){
        cout<<"The number is Armstrong"<<endl;
    }
    else{
        cout<<"The number is not Armstrong"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Armstrong(num);
}