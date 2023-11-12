class Solution {
public:
   int minOperations(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), c1 = 0, c2 = 1, a = nums1[n - 1], B= nums2[n - 1];

    if (B < a) {
        swap(a, B);
        swap(nums1, nums2);
    }
       

    for (int i = 0; i < n - 1; ++i) {
        
        
        
        if (nums1[i] > B || nums2[i] > B) return -1;
           if (nums1[i] > a && nums2[i] > a) return -1;
        if (nums1[i] > a) ++c1;
           if (nums2[i] > a) ++c2;
    }

     return min({c1, c2, n - c1, n - c2});
}
};