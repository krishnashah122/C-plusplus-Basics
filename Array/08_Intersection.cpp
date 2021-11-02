#include<iostream>
using namespace std;
void Intersection(int arr1[], int arr2[], int n1, int n2){
    int i,j,k,a=0;
    int interArr[n1+n2];
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                interArr[a]=arr1[i];
                a++;
            }
        }
    }
    for (i = 0; i < a-1; i++){
        for (j = i+1; j < a; j++){
            if (interArr[i] == interArr[j]){
                for(k=j; k<a; k++){
                    interArr[k]=interArr[k+1];
                }
                a--;
                j--;
            }
        }
    }
    cout<<"The intersection of two array is "<<endl;
    for(i=0; i<a; i++){
        cout<<interArr[i]<<endl;
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
    Intersection(arr1,arr2,n1,n2);
    return 0;
}