#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of array ";
    cin>>n;
    int nums[n];
    int runningSum[n];
    for(i=0; i<n; i++){
        cin>>nums[i];
    }
    i = 0;
    runningSum[i] = nums[i];
    for(i=1; i<n; i++){
        runningSum[i] = nums[i];
        runningSum[i] += runningSum[i-1];
    }
    i=0;
    cout<<"The running sum of array is "<<endl;
    for(i=0; i<n; i++){
        cout<<runningSum[i]<<endl;
    }
    return 0;
}