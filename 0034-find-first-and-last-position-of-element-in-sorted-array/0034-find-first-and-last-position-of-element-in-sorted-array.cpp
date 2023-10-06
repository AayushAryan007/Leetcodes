// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> result={-1,-1};
        
//         //first oocurence
        
//         int left=0;
//         int right=nums.size()-1;
        
//         while(left<=right){
//             int mid=left+(right-left)/2;
            
//             if(nums[mid]==target){
//                 result[0]=mid;
//                 right=mid-1;
//             }
//             else if( nums[mid]<target){
//                 left=mid+1;
//             }
//             else
//                 right=mid-1;
//         }
        
//         //last occurance
//          left = 0;
//         right = nums.size() - 1;
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] == target) {
//                 result[1] = mid;
//                 left = mid + 1;   // Continue searching on the right side
//             } else if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }

//         return result;
//     }
// };


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int beg=0; 
        int last=0;
        int flag=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            {
                if(flag==0)
                {
                    flag=1;
                    last=i;
                    beg=i;
                }
                else if(flag==1)
                {
                   last=i;
                    
                }
                    
            }
            
            else if(nums[i]!=target){
                if(flag==1)
                   {
                      break;}
                
                
            }
        }
        
        if(flag==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else if(flag==1)
        {
            ans.push_back(beg);
            ans.push_back(last);
        }
        
        
        return ans;
    }
};