        //{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
  vector<int> findTwoElement(vector<int> arr, int n) {
        int rep=0,mis=0,i=0;
        while(i<n)          //Traversing the array
        {
            if(arr[i]==i+1)     //if at right position 
            {
                i++;
            }
            else if(arr[i]==arr[arr[i]-1]) //if we get same values
            {
                rep=arr[i];
                mis=i+1;
                i++;
            }
            else{                      //if not at right position
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        return {rep,mis};
  }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
// TC -> O(N)
// SC-> O(1)
// if array having size N and element 1 to N then by using this code we can short that in order (N)
// {
  //  int i=0;
// while(i<N){
//     if(arr[i]==i+1){
//         i++;
//     }
//     else{
//         swap(arr[i],arr[arr[i]-1]);
//     }
// }
// }


// for above que arr[i]==arr[arr[i]-1] swap have to swap but if both are equil then we put it in to repeat
// and element at i+1 will be missing.