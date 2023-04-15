// ABCDE
// ABCD
// ABC 
// AB 
// A

#include <bits/stdc++.h> 
using namespace std;

void print1(int n) {

for (int i =0; i<n ; i++) {

    for (char ch = 'A'; ch<= 'A'+ (n-i-1); ch++) {

        cout<<ch;
    
    }

    cout<<endl;
}

}
int main() {
    int n;
    cout<<"Enter no";
    cin>>n;

print1(n);

}
