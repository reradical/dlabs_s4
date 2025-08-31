#include <iostream>
#include <string>

/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Example
Input:
ATTCGGGA

Output:
3
*/



using namespace std;

int findRep(string f, int pos){
    char cu = f[pos];
    int num = 1;
    for (int i = pos + 1; i < f.size(); i++) {
        if (f[i] == cu){
            num++;
        }
        else {
            break;
        }
    }
    return num;
}



int main(){
    string in;
    cin >> in;
    int max = 1;
    int i = 0;

    for (int j = 0; j < in.size(); j++) {
        int m = findRep(in, i);
        if (m > max) {
            max = m;
        }
        i++;
    }


    cout << max << endl;

    return 0;
}