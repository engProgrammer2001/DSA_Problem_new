// maventic exam code solution easy solution
//  find unique number in given string 
// input: find
// output: 4
// intput: session;
// output: 5 


#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    unordered_set<char> unique_chare;
    for(char c:str)
    {
        unique_chare.insert(c);
    }
    cout<<unique_chare.size()<<endl;
    return 0;
}