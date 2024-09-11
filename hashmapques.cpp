/*QProblem Statement
You are given a series of queries of the form (a, b), where:

a represents the count of the number b. For example, the query (3, 5) means the number 5 appears 3 times.
Your task is to compute the absolute difference between the numbers which have the highest and lowest frequencies (appearing at least once).

If there are multiple numbers with the same frequency, choose the smallest number for the lowest frequency and the largest number for the highest frequency.
Input Format
The first line contains a single integer denoting the number of queries.

The second line onwards contains two space separated integers denoting the queries

Output Format
Output the maximum possible absolute difference between the numbers with the highest and lowest frequencies. If there are only two numbers with the same occurrence, the output should be 0.

Constraints
1 <= q <= 10^5.

1 <= a, b <= 10^5.

Sample Testcase 0
Testcase Input
1
2 1
Testcase Output
0
Explanation
As there is only one pair availabe so the difference will be 0.

Sample Testcase 1
Testcase Input
4
1 2
1 3
2 5
4 4
Testcase Output
2
Explanation
As per the question:


2 occurs 1 time
3 occurs 1 time
5 occurs 2 times
4 occurs 4 times


Therefore the we need to get the difference between the number occuring most number of times (4) and the number ocuring least number of times(2, 3). 


As we want maximum difference the answer is: 4-2 = 2.*/



#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of queries

    unordered_map<int, int> freq; // To track the frequency of each number

    // Process each query
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        freq[b] = a; // Update the frequency of number b
    }

    // Variables to track minimum and maximum frequency numbers
    int minFreq = INT_MAX;
    int maxFreq = INT_MIN;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    // Find the numbers with the minimum and maximum frequency
    for (auto &entry : freq) {
        int num = entry.first;
        int count = entry.second;

        // For minimum frequency, choose the smallest number
        if (count < minFreq) {
            minFreq = count;
            minNum = num;
        } else if (count == minFreq) {
            minNum = min(minNum, num); // Choose the smallest number in case of tie
        }

        // For maximum frequency, choose the largest number
        if (count > maxFreq) {
            maxFreq = count;
            maxNum = num;
        } else if (count == maxFreq) {
            maxNum = max(maxNum, num); // Choose the largest number in case of tie
        }
    }

    // If all numbers have the same frequency or only one number, output 0
    if (minFreq == maxFreq) {
        cout << 0 << endl;
    } else {
        // Otherwise, output the absolute difference
        cout << abs(maxNum - minNum) << endl;
    }

    return 0;
}
