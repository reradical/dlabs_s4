#include <iostream>

using namespace std;

/*
There are n children and m apples that will be distributed to them. Your task is to count the number of ways this can be done.
For example, if n=3 and m=2, there are 6 ways: [0,0,2], [0,1,1], [0,2,0], [1,0,1], [1,1,0] and [2,0,0].
Example
Input:
3 2

Output:
6
*/

    int factorial(int f) {
        int r = 1;
        for (int i = 1; i <= f; ++i) {
            r = r * i;
        }
        return r;
    }

    int distribute(int n, int m) { // stars and bars
        int c = n + m - 1;
        int a = m;
        if (a > c) {
            return 0;
        }
        else {
            return factorial(c) / (factorial(a) * factorial(c - a));
        }
    }


int main(){

    int children;
    int apples;
    int ways = 0;

    cin >> children >> apples; // input

    ways = distribute(children, apples);

    cout << ways << endl; // output



return 0;
}