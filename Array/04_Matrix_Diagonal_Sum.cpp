#include<iostream>
using namespace std;
int main(){
    int arr[10][10],i,j,row,col,sum=0;
    cout<<"Enter the no. of rows and columns ";
    cin>>row>>col;
    cout<<"Enter the elements of matrix"<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout<<"The element of a"<<i+1<<j+1<<"is ";
            cin>>arr[i][j];
        }
    }
    cout<<"The entered matrix is"<<endl;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cout<<arr[i][j]<<"  ";
            if(i==j){
                sum += arr[i][j];
            }
            if(j==col-1){
                cout<<endl<<endl;
            }
        }
    }
    cout<<"The sum of diagonal elements is "<<sum<<endl;
    return 0;
}