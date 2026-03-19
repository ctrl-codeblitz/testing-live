#include <iostream>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long current_number;
    long long total_sum = 0;

    // This will keep reading integers one by one 
    // regardless of whether they are on one line or many.
    while (cin >> current_number) {
        total_sum += current_number;
    }

    // After all numbers are read, output the total.
    cout << total_sum << endl;

    return 0;
}