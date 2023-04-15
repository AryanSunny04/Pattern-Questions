// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// Hint :- Break the pattern into two parts and make two functions out of it using formulas.

#include <iostream>
using namespace std;

void print1(int n){
int space = 0;
for (int i=0 ; i<n ; i++){

    // star

    for (int j=1 ; j<=n-i ; j++){

        cout<<"*";
    }
    // space
    for (int j =0; j<space ; j++){

        cout<<" ";
    }
    // star
    
    for (int j=1 ; j<=n-i ; j++){

        cout<<"*";


}
space+=2;
cout<<endl;
}
}

void print2(int n){
int space = 2*n-2;
for (int i=1 ; i<=n ; i++){

    // star

    for (int j=1 ; j<=i ; j++){

        cout<<"*";
    }
    // space
    for (int j =0; j<space ; j++){

        cout<<" ";
    }
    // star
    
    for (int j=1 ; j<=i ; j++){

        cout<<"*";


}
space-=2;
cout<<endl;
}

}

int main() {
 int n;
 cout<<"Enter the value of n";
 cin>>n;
    print1(n);
    print2(n);
}