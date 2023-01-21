class Solution {
public:
    string kthDistinct(vector<string>& v, int k) {
        unordered_map<string , int> m;
        for(auto i:v)m[i]++;
        for(auto i :v){
            if(m[i]==1)k--;
            if(k==0)return i;
        }
        return "";
        
    }
};


kth_distinct_string_in_an_array.cpp
