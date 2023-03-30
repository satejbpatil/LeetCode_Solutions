class Solution {
public:
    int countOdds(int low, int high) {
        int s=0;
        if(high%2==0) s=(high)/2;
        else s=(high+1)/2;

        int s1=0;
        s1=low/2;
        return s-s1;
    }
};

