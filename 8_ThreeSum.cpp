// Three sum  code of leedecode 

#include<bits/stdc++.h>
using namespace std;
bool TwoSumPair(int a[], int  s, int e, int tar)
{
    int i=s, j=e;
    while(i<j)
    {
        if((a[i]+a[j])<tar)
        {
            j--;
        }
        else if((a[i]+a[j])>tar)
        {
            i++;
        }
        else
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            return true;
        }
    }
    return false;
    
}
void ThreeSumPair(int a[], int n, int target)
{
    // sort array 
    sort(a, a+n);

    for(int i=0; i<n; i++)
    {
        int oneElement = a[i];
        bool chk = TwoSumPair(a,n+1,n-1, target-oneElement);
        if(chk==true)
        {
            cout<<oneElement<<endl;
            return;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int target;
    cin>>target;

    ThreeSumPair(arr,n,target);
}

