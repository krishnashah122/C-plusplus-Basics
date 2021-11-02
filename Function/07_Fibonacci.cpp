#include<iostream>
using namespace std;
void Fibonacci(int a, int b, int n){
    int i,temp;
    for(i=1; i<n; i++){
        cout<<a<<endl;
        cout<<b<<endl;
        temp = a;
        a = b + temp;
        b = b + a;
    }
}
int main(){
    int first,second,num;
    first=0;
    second=1;
    cout<<"Enter the no. of terms ";
    cin>>num;
    Fibonacci(first,second,num);
    return 0;
}