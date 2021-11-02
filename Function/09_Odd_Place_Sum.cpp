#include<iostream>
using namespace std;
void oddSum(int n){
    int i,sum=0,count=1;
    for(i=1; count<=n; i+=2){
        sum = sum + i;
        count++;
    }
    cout<<"The sum of odd placed odd number is "<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter the no. of odd number's sum you want ";
    cin>>num;
    oddSum(num);
    return 0;
}