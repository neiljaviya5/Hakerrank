//Hackerrank question: https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;

void staircase(int n) {

    for(int i = 0;i<n;i++){

        for(int j = 0;j<n-i-1;j++){

            cout<<" ";

        }
        for(int j = n-i-1;j<n;j++){
            cout<<"#";

        }

        cout<<endl;

    }

}

int main()
{
    int n = 8;
//    cin>>n;

    staircase(n);

    return 0;
}
