
// i/p = 1,2,3,4,5,6
// you have add = 0 index to 2 index add 2
//  same - 1 to 5 add 3
//  4 to 5 add 1
// so in the last arrya will
// result 3, 7, 8, 7, 9, 10 
// this is the one of the best solution


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    // create temp array 
    int temp[n+1] = {0};
    
    while(q--)
    {
        int i, j, d;
        cin>>i>>j>>d;

        temp[i]+=d;
        temp[j+1]-=d;
    }
    // Update Array / Prefix sum
    int csum = 0;
    for(int i=0; i<=n; i++)
    {
        csum += temp[i];
        temp[i] = csum;
    }
    // Update orignal array to be resulting array
    for(int i=0; i<n; i++)
    {
        a[i]+=temp[i];
    }
    // print array here 
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}