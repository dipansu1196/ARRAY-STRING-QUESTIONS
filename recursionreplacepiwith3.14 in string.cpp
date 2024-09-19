#include <bits/stdc++.h>
using namespace std;

// Function to replace 'pi' with '3.14' in a single string
void replacePi(string str) {
    if (str.length() == 0) {
        return;
    }

    if (str.length() > 1 && str[0] == 'p' && str[1] == 'i') {
        cout << "3.14";
        replacePi(str.substr(2));  // Recur for remaining substring after 'pi'
    } else {
        cout << str[0];
        replacePi(str.substr(1));  // Recur for the remaining substring
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Process each string in the vector
    for (int i = 0; i < n; i++) {
        replacePi(str[i]);
        cout << endl;  // To print each result in a new line
    }

    return 0;
}
