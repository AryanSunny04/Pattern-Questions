// A
// ABA
// ABCBA
// ABCDCBA

#include <bits/stdc++.h> 
using namespace std;

void print1(int n) {
    

for (int i= 0; i<n ; i++){
    char ch ='A';
    int breakpoint = (2*i-1) / 2;
    //  space
    for (int j=0 ; j<n-i-1 ; j++){

        cout<<" ";
    }
    // CHARACTER
    for (int j = 0 ; j< 2*i+1 ; j++){
        cout<<ch; 
        int breakpoint = (2*i-1) / 2;
         if (int j >= breakpoint) ch++;
        else ch--;

    }
    // space
    for (int j=0 ; j<n-i-1 ; j++){
        cout<<" ";
    }
    if (j <= breakpoint) ch++;
    else ch--;
    cout<<endl;

}
}

int main() {
    int n;
    cout<<"Enter no";
    cin>>n;

print1(n);

}