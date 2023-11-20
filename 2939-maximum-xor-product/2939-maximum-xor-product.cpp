#define ll long long int
#define mod 1000000007

class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        for(ll i = n-1;i>=0;i--){
            ll val=(ll)(1)<<i;
            
            if((a&val)==(b&val)){
                a=a|val;
                b=b|val;
            }
            else{
                if(a>b) swap(a,b);
                a=a|val;
                b=b&(~val);
            }
        }
        
        return (int)(((a%mod)*(b%mod))%mod);
    }
};