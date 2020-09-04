// This program checks if a number is a power of 2 or not using Bit manipulation

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if((x & (x-1))==0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
