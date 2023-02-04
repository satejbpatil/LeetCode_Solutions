class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int c=0;
        for(auto i:v){
            for(int j=0;j<i.size();j++){
                if(i[j]<0)c++;
            }
        }
        return c;
    }
};
