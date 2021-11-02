#include<iostream>
using namespace std;
void MaxMin(int arr[], int n, int k1, int k2){
    int i,j,k,temp,greater,smaller;
    int tempArr[n];
    greater = arr[0];
    smaller = arr[0];
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                for(k=j; k<n; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    greater = arr[n-k1];
    smaller = arr[k2-1];
    cout<<"The "<<k1<<"th greater number in array is "<<greater<<endl;
    cout<<"The "<<k2<<"th smaller number in array is "<<smaller<<endl;
}
int main(){
    int n,i,k1,k2;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter unique elements each time "<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Position of maximum term "<<endl;
    cin>>k1;
    cout<<"Position of minimum term "<<endl;
    cin>>k2;
    cout<<endl<<endl;
    MaxMin(arr,n,k1,k2);
    return 0;
}