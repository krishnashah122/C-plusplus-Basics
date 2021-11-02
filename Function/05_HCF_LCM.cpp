#include<iostream>
using namespace std;
int hcfFunction(int a, int b){
    int i;
    for(i=a; i>=1; i--){
        if(a%i==0 && b%i==0){
            break;
        }
    }
    return i;
}
int main(){
    int num1,num2;
    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter the second number ";
    cin>>num2;
    int hcf = hcfFunction(num1,num2);
    cout<<"The HCF is "<<hcf<<endl;
    int lcm = (num1*num2)/hcf;
    cout<<"The LCM is "<<lcm<<endl;
    return 0;
}