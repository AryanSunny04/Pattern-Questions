// A 
// BB 
// CCC 
// DDDD 


#include <bits/stdc++.h> 
using namespace std;

void print1(int n) {
    char ch = 'A';
for (int i =1; i<=n ; i++) {

    for (int j=1 ; j<=i ; j++) {

        cout<<ch;
        
    
    }
    ch = 'A'+i;

    cout<<endl;
}

}
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;

print1(n);

}