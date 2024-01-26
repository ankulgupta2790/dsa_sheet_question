//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // This function rearranges the input array elements alternately.
    // arr: input array
    // n: size of array
    void rearrange(long long *arr, int n) 
    { 
        // Initialize max_idx to the last index of the array.
        int max_idx = n - 1;
        
        // Initialize min_idx to the first index of the array.
        int min_idx = 0;
        
        // Find the maximum element in the array and add 1 to it.
        int max = arr[n - 1] + 1;
        
        // Loop through each element of the array.
        for(int i = 0; i < n; i++) {
            // If the current index is even.
            if(i % 2 == 0) {
                // Rearrange the element at the current index by storing the modified value.
                arr[i] = (arr[max_idx] % max) * max + arr[i];
                
                // Decrement max_idx to get the next maximum element index.
                max_idx--;
            }
            else {
                // Rearrange the element at the current index by storing the modified value.
                arr[i] = (arr[min_idx] % max) * max + arr[i];
                
                // Increment min_idx to get the next minimum element index.
                min_idx++;
            }
        }
        
        // Divide all elements by max to retrieve the rearranged elements.
        for(int i = 0; i < n; i++) {
            arr[i] /= max;
        }
    }
};



//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends

// TC : O(N)
// SC : O(1)
