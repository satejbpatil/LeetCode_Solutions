class Solution {
public:
    int countKDifference(vector<int>& v, int k) {
        int c=0;
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(abs(v[j]-v[i]) == k) c++;
            }
        }
        return c;
    }
};
