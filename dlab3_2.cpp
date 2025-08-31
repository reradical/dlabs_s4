#include <iostream>
#include <string>

using namespace std;

/*
You are given a string that consists of n characters between a–z. The positions of the string are indexed 1,2,\dots,n.
Your task is to process m operations of the following types:

Change the character at position k to x
Check if the substring from position a to position b is a palindrome

Input
The first input line has two integers n and m: the length of the string and the number of operations.
The next line has a string that consists of n characters.
Finally, there are m lines that describe the operations. Each line is of the form "1 k x" or "2 a b".
Output
For each operation 2, print YES if the substring is a palindrome and NO otherwise.
Constraints

1 \le n, m \le 2 \cdot 10^5
1 \le k \le n
1 \le a \le b \le n

Example
Input:
7 5
aybabtu
2 3 5
1 3 x
2 3 5
1 5 x
2 3 5

Output:
YES
NO
YES
*/

void replaceLetter(string& strg, int pos, char r){
    strg[pos - 1] = r;
}

bool isPalindrome(const string& strg, int a, int b) {
    a--;
    b--;
    while (a < b) {
        if (strg[a] != strg[b]) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

void output(bool tf){
    if (tf) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl;
    }
}


int main(){
    int len, op;
    string str;

    cin >> len >> op;
    cin >> str;


    for (int i = 0; i < op; i++){
        int num;
        cin >> num;
        if (num == 1){
            int n;
            char m;
            cin >> n >> m;
            if (n <= len) {
                replaceLetter(str, n, m);
            }
        }
        if (num == 2){
            int a, b;
            cin >> a >> b;
            output(isPalindrome(str, a, b));
        }

    }
    return 0;

}