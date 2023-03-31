class Solution {
public:
    int smallestEqual(vector<int>& v) {
        for(int i=0;i<v.size();i++){
            if(i%10==v[i]){
                return i;
            }
        }
        return -1;

    }
};
