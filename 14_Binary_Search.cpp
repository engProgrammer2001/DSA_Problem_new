// Input: 5
//        1 2 3 4 5
//        4
// OutPut: key is Present

#include<bits/stdc++.h>
using namespace std;
bool SearchElement(vector<int>& a, int key)
{
    int n=a.size();
    int st=0, end=n-1;
    while(st<=end)
    {
        int mid = (st+end)/2;
        if(a[mid] == key)
        {
            // cout<<"Key is Present In "<<st;
            return true;
        }
        else if(a[mid]<key)
        {
            // shift start value 
            st= mid+1;
        }
        else
        {
            // shift end value 
            end = mid-1;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    // Array should sorted 
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;

    int chk = SearchElement(a,key);
    if(chk)cout<<"Element is Present";
    else cout<<"Element is not Present";
    return 0;
}