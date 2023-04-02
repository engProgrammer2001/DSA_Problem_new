//  This is leedcode Problem - 915 -Partition Array into Disjoint Intervals  
// Input: nums = [5,0,3,8,6]
// Output: 3
// Explanation: left = [5,0,3], right = [8,6]

// Input: nums = [1,1,1,0,6,12]
// Output: 4 
// Explanation: left = [1,1,1,0], right = [6,12]

#include<bits/stdc++.h>
using namespace std;
int PartitionArray(vector<int>&a)
{
    int n=a.size();
    // left array which store a left max value 
    vector<int>leftMax(n);
    leftMax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        leftMax[i]=max(leftMax[i-1],a[i-1]);
    }
    cout<<endl;
    // right array which store a min of right site
    vector<int> rightMin(n);
    rightMin[n-1]=INT_MAX;
    for(int i=n-2;i>=0; i--)
    {
        rightMin[i]=min(rightMin[i+1],a[i+1]);
    }
    // print ans 
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(leftMax[i]<=rightMin[i])return i+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans=PartitionArray(a);
    cout<<ans<<endl;
    return 0;

}