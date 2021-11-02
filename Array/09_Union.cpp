#include<iostream>
using namespace std;
void Union(int arr1[], int arr2[], int n1, int n2){
    int unionArr[n1+n2];
    int i,j,k;
    int n = n1+n2;
    for(i=0; i<n1; i++){
        unionArr[i] = arr1[i];
    }
    for(i=0; i<n2; i++){
        unionArr[n1+i] = arr2[i];
    }
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            if (unionArr[i] == unionArr[j]){
                for(k=j; k<n; k++){
                    unionArr[k]=unionArr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"The Union of two arrays is "<<endl;
    for(i=0; i<n; i++){
        cout<<unionArr[i]<<endl;
    }
}
int main(){
    int i,n1,n2;
    cout<<"Enter the length of first array ";
    cin>>n1;
    cout<<"Enter the length of second array ";
    cin>>n2;
    cout<<"Enter the elements of first array:"<<endl;
    int arr1[n1],arr2[n2];
    for (i = 0; i < n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array:"<<endl;
    for (i = 0; i < n2; i++){
        cin>>arr2[i];
    }
    Union(arr1,arr2,n1,n2);
    return 0;
}