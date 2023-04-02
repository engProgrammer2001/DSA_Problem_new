// This is the method 1  and not a efficient way 
// TIME_COMPLESITY = O(N^2)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target=8;

    int i=0;
    int j=n-1;
    while(i<j)
    {
        if((arr[i]+arr[j])>target){
            j--;
        }
        else if((arr[i]+arr[j])<target){
            i++;
        }
        else if((arr[i] + arr[j]) == target){
            cout<<i <<j <<endl;
            break;
        }
    }
    cout<<-1<<endl;
    return 0;

}