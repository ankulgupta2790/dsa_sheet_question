//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int l=0;
       int r=N-1;
       while(l<=r){
           int mid=(l+r)/2;
           if(K==arr[mid]){
               return 1;
           }
           else if(K>arr[mid]){
               l=mid+1;
           }
           else{
               r=mid-1;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends
// TC-> O(log(N))
// SC-> O(1)