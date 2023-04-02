// This is the Efficient way to write code 
// TIME_COMPLECITY = O(n)

#include<iostream>
using namespace std;
int maxContainer(int ht[], int n){
    // it is store max containing 
    int ans=0;
    int i=0; 
    int j=n-1;
    while (i<j)
    {
        int currArea = min(ht[i],ht[j])*(j-i);
        ans = max(ans, currArea);
        // shifting 
        // left is beneficial for me 
        if(ht[i]<=ht[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int height[n];
    for(int i=0; i<n; i++){
        cin>>height[i];
    }

    int maxContaining = maxContainer(height, n);
    cout<<maxContaining<<endl;
}