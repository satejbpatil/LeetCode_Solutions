class Solution {
public:
    bool isPowerOfFour(int n) {
        long long p=0;
        for(int i=p;p<=n;i++){
            p=pow(4,i);
            if(p==n){
                cout<<p<<" ";
                return true;
            }
        }
        return false;
    }
};
