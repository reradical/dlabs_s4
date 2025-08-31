#include <iostream>
#include <stack>

using namespace std;

/*
You have n coins, each of which has a distinct weight.
There are two stacks which are initially empty. On each step you move one coin to a stack. You never remove a coin from a stack.
After each move, your task is to determine which stack is heavier (if we can be sure that either stack is heavier).
Input
The first input line has an integer n: the number of coins. The coins are numbered 1,2,\dots,n. You know that coin i is always heavier than coin i-1, but you don't know their exact weights.
After this, there are n lines that describe the moves. Each line has two integers c and s: move coin c to stack s (1 = left, 2 = right).
Output
After each move, print < if the right stack is heavier, > if the left stack is heavier, and ? if we can't know which stack is heavier.

Example
Input:
3
2 1
3 2
1 1

Output:
>
<
?

Explanation: After the last move, if the coins are [2,3,4], the left stack is heavier, but if the coins are [1,2,5], the right stack is heavier.
*/


void heavier(int o, int t){
    if (o > t){
        cout << ">" << endl;
    }
    else if (o < t){
        cout << "<" << endl;
    }
    else {
        cout << "?" << endl;
    }

}


int main(){

    stack<int> st1;
    stack<int> st2;

    int total;
    int st1_count = 0;
    int st2_count = 0;
    int coin, stack;

    cin >> total;

    for (int i = 0; i < total; i++){
        cin >> coin >> stack;

        if (stack == 1){
            st1.push(coin);
            st1_count += coin;
        }
        else if (stack == 2){
            st2.push(coin);
            st2_count += coin;
        }
        heavier(st1_count, st2_count);
    }


    return 0;
}