#include<iostream>
using namespace std;
int Factorial(int n){
    int fact;
    if(n==1){
        return n;
    }
    fact = n*Factorial(n-1);
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    cout<<Factorial(num)<<endl;
    return 0;
}