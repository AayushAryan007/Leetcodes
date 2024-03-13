class Solution {
 public:
  int pivotInteger(int n) {
     int l=1, r=n;
      int lsum=l, rsum=r;
      
      
      if(n==1) return n;
      
      while(l<r){
          if(lsum<rsum){
              l++;
              lsum+=l;
          }
          else{
              r--;
              rsum+=r;
          }
          
          if(lsum==rsum and l+1==r-1){
              return l+1;
          } 
      }
      return -1;
  }
};