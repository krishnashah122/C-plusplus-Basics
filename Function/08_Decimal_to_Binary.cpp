#include<iostream>
using namespace std;
void DecToBinary(int n){
    int i,j,a[32];
    for(i=0; n>0; i++){
        a[i] = n%2;
        n=n/2;
    }
    for(j=i; j>=0; j--){
        cout<<a[j]<<endl;
    }
}
int main(){
    int dec;
    cout<<"Enter the decimal number ";
    cin>>dec;
    DecToBinary(dec);
    return 0;
}