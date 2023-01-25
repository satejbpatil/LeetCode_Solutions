class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>m;
        int sum=0;
        for(auto i:nums){
            m[i]++;
        }
        for(auto &i:m){
            if(i.second==1){
                sum=sum+i.first;
            }
        }
        return sum;
    }
};
