
class Solution {
   
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
    long long sum1=0,sum2=0, c1=0,c2=0;
        
        long long l1=nums1.size(), l2=nums2.size();
        for(long long i=0;i<l1;i++){
            
            if(nums1[i]==0)
                c1++;
            else
             sum1+= nums1[i];   
            
        }
        for(long long i=0;i<l2;i++){
            
            if(nums2[i]==0)
                c2++;
            else
             sum2+= nums2[i];   
            
        }
       long long ans=-1;
         if (sum1 +c1 < sum2 + c2) {
            swap(sum1, sum2);
            swap(c1,c2);
        }

        if (sum1 + c1 > sum2 && c2 == 0) {
            return -1;
        }

        return sum1 + c1;
        
        
      
    }
};