
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;

        int low = 1;
        int high = n-2;

        if(nums[0] > nums[1])
            return 0;

        if(nums[n-1] > nums[n-2])
            return n-1;

        while(low <= high) {
            int mid = low + (high-low)/2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;

            
            else if(nums[mid] > nums[mid-1]) {
                low = mid+1;
            }

            else if(nums[mid-1] > nums[mid]) {
                high = mid-1;
            }
        }

        return -1;
    }
};
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
        
//         int n=nums.size();
        
//         int s=1, e=n-2;
//         if(nums[0]>nums[1])
//             return 0;
//         if(nums[n-1]>nums[n-2])
//             return n-1;
        
        
//         while(s<=e){
            
//             int mid=(s+e)/2;
            
//             if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]){
//                 return mid;
//             }  
//              else if(nums[mid] > nums[mid-1]) {
//                 s = mid+1;
//             }

//             else if(nums[mid-1] > nums[mid]) {
//                 e = mid-1;
//             }
//             }
    
//         return -1;
//     }
// };