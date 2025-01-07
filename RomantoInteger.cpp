#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0; // To store the final integer value
        int n = s.size();

        // Function to get the value of a Roman numeral
        auto getValue = [](char c) -> int {
            switch (c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default: return 0;
            }
        };

        // Loop through the Roman numeral string
        for (int i = 0; i < n; i++) {
            int current = getValue(s[i]);
            int next = (i + 1 < n) ? getValue(s[i + 1]) : 0;

            // If the current value is less than the next value, subtract it
            if (current < next) {
                result -= current;
            } else {
                result += current;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string roman = "MCMXCIV"; // Example: 1994
    cout << "Integer value: " << sol.romanToInt(roman) << endl;
    return 0;
}
