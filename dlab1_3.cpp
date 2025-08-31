#include <iostream>

using namespace std;

/*
Given the structure of a company, your task is to calculate for each employee the number of their subordinates.
Input
The first input line has an integer n: the number of employees. The employees are numbered 1,2,\dots,n, and employee 1 is the general director of the company.
After this, there are n-1 integers: for each employee 2,3,\dots,n their direct boss in the company.
Output
Print n integers: for each employee 1,2,\dots,n the number of their subordinates.


Example
Input:
5
1 1 2 3

Output:
4 1 1 0 0
*/



void countSub(int employee, const int* boss, int* subordinates, int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (boss[i] == employee) {
            countSub(i, boss, subordinates, n);
            count += subordinates[i] + 1;
        }
    }
    subordinates[employee] = count;
}

int main() {
    int n;
    cin >> n;

    int boss[n];
    int subordinates[n];

    for (int i = 1; i < n; ++i) {
        cin >> boss[i];
        boss[i]--;
    }

    countSub(0, boss, subordinates, n);

    for (int i = 0; i < n; ++i) {
        cout << subordinates[i] << " ";
    }
    cout << endl;

    return 0;
}
