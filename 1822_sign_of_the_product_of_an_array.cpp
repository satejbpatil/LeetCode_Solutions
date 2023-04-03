class Solution {
public:
    int arraySign(vector<int>& v) {
        int m=1;
        for(auto i:v){
            if(i==0) {return 0;break;}
            if(i<0) m=-m;
        }
        return m;
    }
};
