//Hackerrank Problem:https://www.hackerrank.com/challenges/simple-array-sum/problem


#include <bits/stdc++.h>
#define f(n) for(int i = 0,i<n;i++)

using namespace std;

string ltrim(const string &);

string rtrim(const string &);

vector<string> split(const string &);


int simpleArraySum(vector<int> ar) {

    int l = ar.size();

    int sum = 0;
    for (int i = 0; i < l; i++) {

        sum += ar[i]; // Takes the value of element and adds it to the sum.

    }

    return sum;
}

int main() {
    //int n; //number of elements
    vector<int> arr;
//    int temp;                 // This part of the code is for user input
//    cin>>n;                   // Here predefined vector is used

//    f(n){
//        cin>>temp;
//        arr.push_back(temp);
//    }

    arr = {1,2,3,4,5,6};

    cout<<simpleArraySum(arr);
}