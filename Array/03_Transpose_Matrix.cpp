#include<iostream>
using namespace std;
int main(){
    int i,j,row,col,temp;
    int arr[10][10];
    int transpose[10][10];
    cout<<"Enter the no. of rows and columns ";
    cin>>row>>col;
    cout<<"Enter the elements of matrix"<<endl;
    for(i=0; i<row; ++i){
        for(j=0; j<col; ++j){
            cout<<"The element of a"<<i+1<<j+1<<"is ";
            cin>>arr[i][j];
        }
    }
    cout<<"The entered matrix is"<<endl;
    for(i=0; i<row; ++i){
        for(j=0; j<col; j++){
            cout<<arr[i][j]<<"  ";
            if(j==col-1){
                cout<<endl<<endl;
            }
        }
        cout<<endl;
    }
    for(i=0; i<row; ++i){
        for(j=0; j<col; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    cout<<"The Transposed Matrix is"<<endl;
    for(i=0; i<col; ++i){
        for(j=0; j<row; j++){
            cout<<transpose[i][j]<<" ";
            if(j==row-1){
                cout<<endl<<endl;
            }
        }
    }
    return 0;
}