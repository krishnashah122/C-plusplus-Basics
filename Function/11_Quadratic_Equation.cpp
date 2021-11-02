#include<iostream>
#include<cmath>
using namespace std;
void Quadratic(int a,int b, int c){
    int x1,x2;
    int discriminant = pow(b,2)-(4*a*c);
    if(discriminant>=0){
        x1 = (- b + sqrt(discriminant))/2*a;
        x2 = (- b - sqrt(discriminant))/2*a;
    }else{
        x1 = -b/(2*a);
        x2 = sqrt(-discriminant)/(2*a);
    }
    cout<<"The first root is "<<x1<<endl;
    cout<<"The second root is "<<x2<<endl;
}
int main(){
    int p,q,r;
    cout<<"Enter the value of a ";
    cin>>p;
    cout<<"Enter the value of b ";
    cin>>q;
    cout<<"Enter the value of c ";
    cin>>r;
    Quadratic(p,q,r);
    return 0;
}