class Solution {
public:
    int differenceOfSum(vector<int>& v) {
        int s=0;
        int a=0;
        int b;
        for(auto i:v){
            s=s+i;
            while(i!=0){
                b=i%10;
                a=a+b;
                i=i/10;
            }
        }
       int ans=abs(s-a);
       return ans;
    }
};
