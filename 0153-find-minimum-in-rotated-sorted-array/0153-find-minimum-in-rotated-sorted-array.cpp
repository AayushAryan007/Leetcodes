class Solution {
public:
    int findMin(vector<int>& arr) {
        
        int mini=INT_MAX; int n=arr.size();
        int low=0,high=n-1;
          
        while(low<=high){
             int mid=(low+high)/2;
            
            
            if(arr[low]<=arr[mid]  )
            {
                mini=min(mini, arr[low]);
                low=mid+1;
            }
            else 
            {
                mini=min(mini,arr[mid]);
                high=mid-1;
            }
                
         
            
        }
        return mini;
    }
};