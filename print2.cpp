// 1
// 1 2
// 1 2 3
// 1 2 3 4 

#include <bits/stdc++.h> 
using namespace std;

void print1(int n) {

for (int i =1 ; i<=n ; i++) {

    for (int j =1 ; j<=i ; j++) {

        cout<<j<<" ";
        
    
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