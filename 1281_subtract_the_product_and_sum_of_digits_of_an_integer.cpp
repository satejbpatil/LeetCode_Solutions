class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=1;
        int a;
        int s=0;
        while(n!=0){
            a=n%10;
            m=m*a;
            s=s+a;
            n=n/10;
        }
        int ans=m-s;
        return ans;
    }

};
