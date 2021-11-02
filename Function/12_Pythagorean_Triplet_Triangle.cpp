#include<iostream>
#include<cmath>
using namespace std;
void Triplet(int a, int b, int c){
    int maxNum;
    if(a>b && a>c){
            maxNum = a;
            if(maxNum*maxNum == b*b + c*c){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }
        else if(b>a && b>c){
            maxNum = b;
            if(maxNum*maxNum == a*a + c*c){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }else{
            maxNum = c;
            if(maxNum*maxNum == a*a + b*b){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }   
}
int main(){
    int x,y,z;
    cout<<"Enter the first side ";
    cin>>x;
    cout<<"Enter the second side ";
    cin>>y;
    cout<<"Enter the third side ";
    cin>>z;
    Triplet(x,y,z);
    return 0;
}