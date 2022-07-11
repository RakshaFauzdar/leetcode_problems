// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long res=0;
        int i=0,j=n-1;
        int left=0,right=0;
        while(i<=j)
        {
            if(arr[i]<arr[j])
            {
                if(arr[i]>left)
                {
                    left=arr[i];
                }
                else
                {
                    res+=(left-arr[i]);
                }
                i++;
            }
            else
            {
                if(arr[j]>right)
                {
                    right=arr[j];
                }
                else
                {
                    res+=(right-arr[j]);
                }
                j--;
            }
        }
        return res;
        
        // code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends