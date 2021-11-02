#include<iostream>
using namespace std;
void Sum(int n){
    int rem,add=0;
    if(n<10){
        cout<<"The number is of only one digit that is "<<n<<endl;
    }else{
        rem = n%10;
        while(n>=10){
            n=n/10;
        }    
        add = n+rem;
        cout<<"The sum of first and last digit of given number is "<<add<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Sum(num);
    return 0;
}