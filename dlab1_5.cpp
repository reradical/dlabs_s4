#include <iostream>
#include <vector>

using namespace std;

/*
Given an array of n integers, your task is to process q queries of the form: what is the minimum value in range [a,b]?
Input
The first input line has two integers n and q: the number of values and queries.
The second line has n integers x_1,x_2,\dots,x_n: the array values.
Finally, there are q lines describing the queries. Each line has two integers a and b: what is the minimum value in range [a,b]?
Output
Print the result of each query.

Example
Input:
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3

Output:
2
1
1
4
*/

void findMin(int arr[], int s, int e) {
    s = s-1;
    e = e-1;
    int cu = arr[s];
    int min = arr[s];
    
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << min << endl;
}

int main(){

    int n, q;
    
    cin >> n >> q;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int st, en;

    for (int j = 0; j < q; j++) {
        cin >> st >> en;
        findMin(arr, st, en);
    }

    delete [] arr;

    return 0;
}