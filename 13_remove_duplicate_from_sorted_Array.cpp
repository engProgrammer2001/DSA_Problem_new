#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int>& a)
{
    
    int n= a.size();
    int i=0;
    int j=1;
    while (j<n)
    {
        // yadi jth index ki value badi hogi to mai i++ karunga othtewise mai j++ karunga
        if(a[j]>a[i])
        {
            i++;
            a[i]=a[j];
        }
        j++;
    }
    return i+1;
    
}
int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans=removeDuplicate(a);
    cout<<ans<<endl;

    return 0;
}