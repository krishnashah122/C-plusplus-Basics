#include<iostream>
using namespace std;
void checkTriangle(int a, int b, int c){
    if((a+b)>c){
        if((b+c)>a){
            if((c+a)>b){
                cout<<"The Triangle is valid";
            }
            else{
                cout<<"The Triangle is not valid";
            }
        }
        else{
            cout<<"The Triangle is not valid";
        }
    }else{
        cout<<"The Triangle is not valid";
    }
}
int main(){
    int first,second,third;
    cout<<"Enter first side ";
    cin>>first;
    cout<<"Enter second side ";
    cin>>second;
    cout<<"Enter third side ";
    cin>>third;
    checkTriangle(first,second,third);
    return 0;
}