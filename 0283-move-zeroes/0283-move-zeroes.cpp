class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return ;
        
        for( i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                //increment j and i increments by 2 in loop
              j++;
            
            
            }   
            
        }
    }
};

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
        
//         int i=0; int j=0;
        
//         while(j<n){
//             if(nums[j]!=0){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//             j++;
//         }
        
// //         while(i<n and j<n){
// //              while(i<n and nums[i]==0){
// //             i++;
// //         }
// //         while(j<n and nums[j]!=0){
// //             j++;
// //         }
        
// //         if(i<n and j<i){
// //             swap(nums[i],nums[j]);
// //             i++; j++;
// //         }
// //         }
       
//     }
// };