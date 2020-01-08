#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int size1 = n+1;
    int size2 = m+1;
    string s1[20];
    for(int i=1; i<size1; i++) {
        // getline(cin,s1[i]);
        cin>>s1[i];
    }
    string s2[20];
    for(int i=1; i<size2; i++) {
        // getline(cin,s2[i]);
        cin>>s2[i];
    }
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        if(x < n) {
            cout<<s1[x];
        } else if(x == n) {
            cout<<s1[x];
        }
        
        if(x > n) {
            int p = x%n;
            if(p==0) {
                cout<<s1[p+1];
            } else {
                cout<<s1[p];
            }
        }
        
        if(x < m) {
            cout<<s2[x]<<endl;
        } else if(x == m) {
            cout<<s2[x]<<endl;
        }
        
        if(x > m) {
            int q = x%m;
            if(q==0) {
                cout<<s1[q+1]<<endl;
            } else {
                cout<<s2[q]<<endl;
            }
        }
    }
    return 0;
}
