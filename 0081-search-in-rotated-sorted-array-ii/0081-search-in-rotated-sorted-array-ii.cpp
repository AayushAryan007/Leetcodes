class Solution {
public:
    bool search(vector<int>& arr, int target) {
          
        int n=arr.size();
        
        int low=0, high=n-1, mid;
        
        while(low<=high)
        {
            mid=(low+high)/2;
              if(arr[mid]==target) return true;
            if(arr[low]==arr[mid] and arr[mid]==arr[high]){
                low+=1;
                high-=1;
                continue;
            }
             
            
            if(arr[low]<=arr[mid]){
                if(arr[low]<=target and target<=arr[mid]){
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            else{
                if(arr[mid]<=target and target<=arr[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
      
        return false;
    
    }
};