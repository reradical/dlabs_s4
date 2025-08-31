#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
In a movie festival n movies will be shown. You know the starting and ending time of each movie. What is the maximum number of movies you can watch entirely?
Input
The first input line has an integer n: the number of movies.
After this, there are n lines that describe the movies. Each line has two integers a and b: the starting and ending times of a movie.
Output
Print one integer: the maximum number of movies.

Example
Input:
3
3 5
4 9
5 8

Output:
2
*/

int main(){

    int size;
    cin >> size;
    int end = 0;
    
    vector<pair<int, int>> movies(size);

    for (int i = 0; i < size; ++i) {
        cin >> movies[i].first >> movies[i].second;
    }

    int count = 0;


    for (int i = 0; i < size; ++i) {
        if (movies[i].first >= end) {
            ++count;
            end = movies[i].second;
        }
    }



    cout << count << endl;


    return 0;
}