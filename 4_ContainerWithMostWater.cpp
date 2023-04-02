// This is the solution of the methed 1 
// TIME_COMPLESITY = O(N^2)

#include<iostream>
using namespace std;

int maxContainer(int ht[], int n){
    // use to store max containing area 
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int currArea = min(ht[i],ht[j])* (j-1);
            ans = max(ans,currArea);
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

    int maxContainignArea = maxContainer(height, n);
    cout<<maxContainignArea<<endl;
}