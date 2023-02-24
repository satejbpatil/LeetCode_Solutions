class Solution {
public:
    int maximumCount(vector<int>& v) {
        int n=0;
        int p=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>=1) p++;
            else if(v[i]<=-1) n++;
        }
        return max(n,p);
    }
};
2529_max_count_of_positive_int_and_negative_int.cpp
