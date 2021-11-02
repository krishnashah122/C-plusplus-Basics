#include <iostream>
using namespace std;
void myFunction(void){
    int num,greater=1,count=1;
    cout<<"Enter a Number ";
    cin>>num;
    while(num != 0){
        if(num>greater){
            greater = num;
        }
        cout<<"Enter the number again ";
        cin>>num;
        count++;
    }
    cout<<"The no. of numbers you entered is "<<count<<endl;
    cout<<"The greater number is "<<greater<<endl;
}
int main(){
    myFunction();
    return 0;
}