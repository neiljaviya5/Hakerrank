///Hackerrank question: https://www.hackerrank.com/challenges/plus-minus/problem

#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;

void plusMinus(vector<int> arr) {
    float pos = 0,neg = 0,zero = 0;
    f(arr.size()){

        pos += (arr[i]>0);
        neg += (arr[i]<0);
        zero+= (arr[i] == 0);

    }

    pos /= arr.size();
    neg /= arr.size();
    zero/= arr.size();

    printf("%.6f\n%.6f\n%.6f\n",pos,neg,zero);
}

int main()
{

//    int n;
//    cin>>n;
//    int temp;
    vector<int> arr = {-6, 7, 0, 3, 0 } ;

//    f(n){
//
//        cin>>temp;
//        arr.push_back(temp);
//
//    }

    plusMinus(arr);
}
