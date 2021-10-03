#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    cin.ignore();
    while(t)
    {
        string a;
        getline(cin,a);
        for(int i=0;i<a.length();i=i+2)
        {
            
            {
                cout<<a[i];
            }
        }
        cout<<" ";
        for(int j=1;j<a.length();j=j+2)
        {
            
            {
                cout<<a[j];
            }
        }
        cout<<endl;
    --t; }
    return 0;
}
