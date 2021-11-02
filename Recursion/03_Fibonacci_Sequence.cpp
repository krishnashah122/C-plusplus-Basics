#include<iostream>
using namespace std;
int Fibonacci(int a, int b, int n){
    int c;
    if(n==0){
        return 0;
    }
    c = a + b;
    cout<<c<<endl;
    Fibonacci(b, c, n-1);
}
int main(){
    int a=0,b=1,n;
    cout<<"Enter the nth term ";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    Fibonacci(a,b,n-2);
    return 0;
}