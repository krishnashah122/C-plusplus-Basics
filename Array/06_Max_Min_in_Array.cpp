#include<iostream>
using namespace std;
void MaxMin(int arr[], int n){
    int i,greater,smaller;
    greater = arr[0];
    smaller = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>greater){
            greater = arr[i];
        }
    }
    for(i=1; i<n; i++){
        if(arr[i]<smaller){
            smaller = arr[i];
        }
    }
    cout<<"The greater number in array is "<<greater<<endl;
    cout<<"The smaller number in array is "<<smaller<<endl;
}
int main(){
    int n,i;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    MaxMin(arr,n);
    return 0;
}