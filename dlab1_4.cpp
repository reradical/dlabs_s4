#include <iostream>
#include <vector>

using namespace std;

/*
A company has n employees with certain salaries. Your task is to keep track of the salaries and process queries.
Input
The first input line contains two integers n and q: the number of employees and queries. The employees are numbered 1,2,\ldots,n.
The next line has n integers p_1,p_2,\ldots,p_n: each employee's salary.
After this, there are q lines describing the queries. Each line has one of the following forms:

! k x: change the salary of employee k to x
? a b: count the number of employees whose salary is between a \ldots b

Output
Print the answer to each ? query.

Example
Input:
5 3
3 7 2 2 5
? 2 3
! 3 6
? 2 3

Output:
3
2
*/

void Change(int arr[], int k, int x){
    arr[k] = x;
}


void Count(int size, int arr[], int a, int b) {
    int count;
    for (int i = 0; i < size; i++) {
        if (a <= arr[i] && arr[i] <= b) {
            count++;
        }
    }
    cout << count << endl;
}


int main(){

    int n, q;

    cin >> n >> q;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k, x;
    char type;

    for (int j = 0; j < q; j++) {
        cin >> type;
        if (type == '!') {
            cin >> k >> x;
            Change(arr, k, x);
        }
        else if (type == '?') {
            cin >> k >> x;
            Count(n, arr, k, x);
        }

    }

    return 0;
}