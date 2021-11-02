// FUNCTION
// 1. Take integer inputs till the user enters 0 and print the largest number from all.
/*
#include <iostream>
using namespace std;
void myFunction(void){
    int num,greater=1,count=1;
    cout<<"Enter a Number ";
    cin>>num;
    while(num != 0){
        if(num>greater){
            greater = num;
        }
        cout<<"Enter the number again ";
        cin>>num;
        count++;
    }
    cout<<"The no. of numbers you entered is "<<count<<endl;
    cout<<"The greater number is "<<greater<<endl;
}
int main(){
    myFunction();
    return 0;
}
*/


// 2. Armstrong Number
/*
#include<iostream>
#include<cmath>
using namespace std;
void Armstrong(int n){
    int key=n,number=0;
    while(n>0){
        int rem = n%10;
        number = number + pow(rem,3);
        n = n/10;
    }
    if(number==key){
        cout<<"The number is Armstrong"<<endl;
    }
    else{
        cout<<"The number is not Armstrong"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Armstrong(num);
}
*/


// 3. Palindrome Number
/*
#include<iostream>
using namespace std;
void Palindrome(int n){
    int key=n,number=0;
    while(n>0){
        int rem = n%10;
        number = number*10 + rem;
        n = n/10;
    }
    if(number==key){
        cout<<"The number is Palindrome"<<endl;
    }
    else{
        cout<<"The number is not Palindrome"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Palindrome(num);
    return 0;
}
*/


// 4. Reverse String
/*
#include<iostream>
using namespace std;
void Reverse(string word){
    string key = word,str;
    int len = word.length() - 1;
    while(len>=0){
        str = str + word[len];
        len--;
    }
    cout<<"The reversed string is "<<str<<endl;
}
int main(){
    string letter;
    cout<<"Enter a String ";
    cin>>letter;
    Reverse(letter);
    return 0;
}
*/


// 5. HCF and LCM
/*
#include<iostream>
using namespace std;
int hcfFunction(int a, int b){
    int i;
    for(i=a; i>=1; i--){
        if(a%i==0 && b%i==0){
            break;
        }
    }
    return i;
}
int main(){
    int num1,num2;
    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter the second number ";
    cin>>num2;
    int hcf = hcfFunction(num1,num2);
    cout<<"The HCF is "<<hcf<<endl;
    int lcm = (num1*num2)/hcf;
    cout<<"The LCM is "<<lcm<<endl;
    return 0;
}
*/


// 6. Check Triangle
/*
#include<iostream>
using namespace std;
void checkTriangle(int a, int b, int c){
    if((a+b)>c){
        if((b+c)>a){
            if((c+a)>b){
                cout<<"The Triangle is valid";
            }
            else{
                cout<<"The Triangle is not valid";
            }
        }
        else{
            cout<<"The Triangle is not valid";
        }
    }else{
        cout<<"The Triangle is not valid";
    }
}
int main(){
    int first,second,third;
    cout<<"Enter first side ";
    cin>>first;
    cout<<"Enter second side ";
    cin>>second;
    cout<<"Enter third side ";
    cin>>third;
    checkTriangle(first,second,third);
    return 0;
}
*/


// 7. Fibonacci Series
/*
#include<iostream>
using namespace std;
void Fibonacci(int a, int b, int n){
    int i,temp;
    for(i=1; i<n; i++){
        cout<<a<<endl;
        cout<<b<<endl;
        temp = a;
        a = b + temp;
        b = b + a;
    }
}
int main(){
    int first,second,num;
    first=0;
    second=1;
    cout<<"Enter the no. of terms ";
    cin>>num;
    Fibonacci(first,second,num);
    return 0;
}
*/


// 8. Decimal to Binary
/*
#include<iostream>
using namespace std;
void DecToBinary(int n){
    int i,j,a[32];
    for(i=0; n>0; i++){
        a[i] = n%2;
        n=n/2;
    }
    for(j=i; j>=0; j--){
        cout<<a[j]<<endl;
    }
}
int main(){
    int dec;
    cout<<"Enter the decimal number ";
    cin>>dec;
    DecToBinary(dec);
    return 0;
}
*/


// 9. Odd Place Sum
/*
#include<iostream>
using namespace std;
void oddSum(int n){
    int i,sum=0,count=1;
    for(i=1; count<=n; i+=2){
        sum = sum + i;
        count++;
    }
    cout<<"The sum of odd placed odd number is "<<sum<<endl;
}
int main(){
    int num;
    cout<<"Enter the no. of odd number's sum you want ";
    cin>>num;
    oddSum(num);
    return 0;
}
*/


// 10. First and Last Digit Sum
/*
#include<iostream>
using namespace std;
void Sum(int n){
    int rem,add=0;
    if(n<10){
        cout<<"The number is of only one digit that is "<<n<<endl;
    }else{
        rem = n%10;
        while(n>=10){
            n=n/10;
        }    
        add = n+rem;
        cout<<"The sum of first and last digit of given number is "<<add<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter any number ";
    cin>>num;
    Sum(num);
    return 0;
}
*/


// 11. Quadratic Equation
/*
#include<iostream>
#include<cmath>
using namespace std;
void Quadratic(int a,int b, int c){
    int x1,x2;
    int discriminant = pow(b,2)-(4*a*c);
    if(discriminant>=0){
        x1 = (- b + sqrt(discriminant))/2*a;
        x2 = (- b - sqrt(discriminant))/2*a;
    }else{
        x1 = -b/(2*a);
        x2 = sqrt(-discriminant)/(2*a);
    }
    cout<<"The first root is "<<x1<<endl;
    cout<<"The second root is "<<x2<<endl;
}
int main(){
    int p,q,r;
    cout<<"Enter the value of a ";
    cin>>p;
    cout<<"Enter the value of b ";
    cin>>q;
    cout<<"Enter the value of c ";
    cin>>r;
    Quadratic(p,q,r);
    return 0;
}
*/


// 12. Pythagorean Triplet Triangle
/*
#include<iostream>
#include<cmath>
using namespace std;
void Triplet(int a, int b, int c){
    int maxNum;
    if(a>b && a>c){
            maxNum = a;
            if(maxNum*maxNum == b*b + c*c){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }
        else if(b>a && b>c){
            maxNum = b;
            if(maxNum*maxNum == a*a + c*c){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }else{
            maxNum = c;
            if(maxNum*maxNum == a*a + b*b){
                cout<<"The Triangle is Pythagorean Triplet"<<endl;
            }else{
                cout<<"The Triangle is not Pythagorean Triplet"<<endl;
            }
        }   
}
int main(){
    int x,y,z;
    cout<<"Enter the first side ";
    cin>>x;
    cout<<"Enter the second side ";
    cin>>y;
    cout<<"Enter the third side ";
    cin>>z;
    Triplet(x,y,z);
    return 0;
}
*/


// RECURSION
// 13. Sum of first n natural numbers
/*
#include<iostream>
using namespace std;
void Add(int n, int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum += n;
    Add(n-1, sum);
}
int main(){
    int num,count=0;
    cout<<"Enter the number ";
    cin>>num;
    Add(num, count);
    return 0;
}
*/


// 14. Factorial of n
/*
#include<iostream>
using namespace std;
int Factorial(int n){
    int fact;
    if(n==1){
        return n;
    }
    fact = n*Factorial(n-1);
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    cout<<Factorial(num)<<endl;
    return 0;
}
*/


// 15. Fibonacci Sequence
/*
#include<iostream>
using namespace std;
int Fibonacci(int a, int b, int n){
    int c;
    if(n==0){
        return 0;
    }
    c = a + b;
    cout<<c<<endl;
    Fibonacci(b, c, n-1);
}
int main(){
    int a=0,b=1,n;
    cout<<"Enter the nth term ";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    Fibonacci(a,b,n-2);
    return 0;
}
*/


// ARRAY
// 16. Concatenation of two Arrays
/*
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
*/


// 17. Running Sum of 1D Array
/*
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
*/


// 18. Transpose Matrix
/*
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
*/


// 19. Matrix Diagonal Sum
/*
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
*/


// 20. Sort in Ascending Order.
/*
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
*/


// 21. Find Maximum and Minimum in array.
/*
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
*/


// 22. Find Kth Max and Min element in array.
/*
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
*/


// 23. Intersection of Two Arrays.
/*
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
*/


// 24. Union of Two Arrays.
/*
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
*/


// 25. Cyclically rotate an array by one.
/*
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
*/