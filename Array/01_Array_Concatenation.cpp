#include<iostream>
using namespace std;
int main(){
    int arr1[20],arr2[20],sum[50];
    int i,j,k,n1,n2;
    cout<<"Enter the no. of elements of first array ";
    cin>>n1;
    for(i=0; i<n1; i++){
        cin>>arr1[i];
    }
    i=0;
    cout<<"Enter the no. of elements of second array ";
    cin>>n2;
    for(i=0; i<n2; i++){
        cin>>arr2[i];
    }
    i=0;
    for(i=0; i<n1; i++){
        sum[i] = arr1[i];
    }
    j=i;
    i=0;
    for(i=0; i<n2; i++){
        sum[j] = arr2[i];
        j++;
    }
    i=0;
    k=n1+n2;
    cout<<"The Concatinated array is ";
    for(i=0; i<k; i++){
        cout<<sum[i]<<",";
    }
    return 0;
}