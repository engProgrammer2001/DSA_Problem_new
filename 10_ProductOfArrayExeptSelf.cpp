//  LeedCode Problmes : Product of Array Exept self
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
//  Other Inpur
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>&a)
{
    int n = a.size();
    
    // left array to store product of left 
    vector<int>left(n);
    left[0] = 1;
    for(int i=1; i<n; i++)
    {
        left[i] = left[i-1] * a[i-1];
    }

    // right array to store product of right array
    vector<int>right(n);
    right[n-1] = 1;
    for(int i=n-2; i>=0; i--)
    {
        right[i] = right[i+1] * a[i+1];
    }

    vector<int>ans(n);
    for(int i=0; i<n; i++)
    {
        ans[i] = left[i]*right[i];
    }
    return ans;

}
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> result = productExceptSelf(a);
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}