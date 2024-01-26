//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    // Function to count the number of triplets in the array
    // whose sum is less than the given 'sum'
    long long countTriplets(long long arr[], int n, long long sum) {
        // Sorting the array in ascending order
        std::sort(arr, arr + n);
        
        long long count = 0; // Initialize count for triplets
        
        // Loop through the array elements
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1; // Initialize 'j' to next index after 'i'
            int k = n - 1; // Initialize 'k' to last index
            
            // Find triplets where arr[i] + arr[j] + arr[k] is less than 'sum'
            while (j < k) {
                // If the sum of elements is less than the given 'sum'
                if (arr[i] + arr[j] + arr[k] < sum) {
                    // Increment the count by the number of elements between 'j' and 'k'
                    // Since the array is sorted, all elements between 'j' and 'k' will satisfy the condition
                    count += (k - j);
                    j++; // Move to the next element after 'j'
                } else {
                    k--; // Decrement 'k' if the sum is not less than 'sum'
                }
            }
        }
        return count; // Return the count of triplets
    }
};


//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends