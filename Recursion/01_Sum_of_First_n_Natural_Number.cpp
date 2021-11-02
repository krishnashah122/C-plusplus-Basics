#include<iostream>
using namespace std;
void Add(int n, int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum += n;
    Add(n-1, sum);
}
int main(){
    int num,count=0;
    cout<<"Enter the number ";
    cin>>num;
    Add(num, count);
    return 0;
}