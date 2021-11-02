#include<iostream>
using namespace std;
void CyclicRotate(int arr[], int n){
    int i,temp[n];
    for(i=0; i<n; i++){
        if(i==n-1){
            temp[0] = arr[n-1];
        }else{
            temp[i+1] = arr[i];
        }
    }
    for(i=0; i<n; i++){
        arr[i] = temp[i];
    }
    cout<<"The Cyclically rotated array is"<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int i,n;
    cout<<"Enter the length of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    CyclicRotate(arr,n);
    return 0;
}