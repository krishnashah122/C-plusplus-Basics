#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    i=0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    i=0;
    cout<<"The sorted array is "<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}