class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==0) return true;
        for(long long i=0;i<=n;i++){
            if(i*i==n) {
                return true;
            }
            if(i*i>n){
                return false;
            }  
        }
        return false ;
    }
};
