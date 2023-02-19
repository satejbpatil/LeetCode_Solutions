class Solution {
public:
    int pivotInteger(int n) {
        int s1=0;
        int s2=0;
        for(int i=1;i<=n;i++){
            s1=s1+i;
        }
        for(int i=n;i>0;i--){
            s2=s2+i;
            if(s1==s2) return i;
            s1=s1-i;
        }
        return -1;
    }
};
