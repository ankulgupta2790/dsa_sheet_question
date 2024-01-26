//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    string findSum(string X, string Y) {
        int i = X.length() - 1;
        int j = Y.length() - 1;
        string ans = "";
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {
            int a = (i >= 0) ? (X[i--] - '0') : 0;
            int b = (j >= 0) ? (Y[j--] - '0') : 0;
            
            int sum = a + b + carry;
            carry = sum / 10;
            int digit = sum % 10;
            
            ans = to_string(digit) + ans;
        }

        // Remove leading zeros from the result
        int leadingZero = 0;
        while (leadingZero < ans.length() && ans[leadingZero] == '0') {
            leadingZero++;
        }

        // If the result is all zeros, return "0"
        if (leadingZero == ans.length()) {
            return "0";
        }

        return ans.substr(leadingZero); // Return result without leading zeros
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends
// TC-> O(N);
// SC-> O(result.length())