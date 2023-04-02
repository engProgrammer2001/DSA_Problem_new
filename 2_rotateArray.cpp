#include<bits/stdc++.h>
using namespace std;
void RotateArrayBy1(int *a, int n){
    int temp = a[n-1];
    for(int i=n-2; i>=0; i--){
        a[i+1] = a[i];
    }
    a[0] = temp;
}
void RotateArrayByk(int *a, int n, int k){
    k=k%n;
    for(int i=0; i<k; i++){
        RotateArrayBy1(a,n);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
     
    // make rotate function 
    RotateArrayByk(arr, n, k);

    // print value Here 
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
