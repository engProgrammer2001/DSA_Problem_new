//  leed code Problem Rain Water Tropping 
// input:  [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Other Input 
// Input: a = [4,2,0,3,2,5]
// Output: 9


#include<bits/stdc++.h>
using namespace std;
int TroppedWater(vector<int>&a)
{
    int n = a.size();

    // left array
    vector<int> left(n);
    left[0] = 0;
    for(int i=1; i<n; i++)
    {
        left[i] = max(left[i-1],a[i-1]);
    }

    // right array
    vector<int> right(n);
    right[n-1] = 0;
    for(int j=n-2; j>=0; j--)
    {
        right[j] = max(right[j+1],a[j+1]);
    }

    // ans 
    int ans =0;
    for(int i=0; i<n; i++)
    {
        int leftMax = left[i];
        int rightMax = right[i];

        int heightEffective = min(leftMax, rightMax)-a[i];
        if(heightEffective>0)ans+=heightEffective;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans = TroppedWater(a);
    cout<<ans<<endl;
}