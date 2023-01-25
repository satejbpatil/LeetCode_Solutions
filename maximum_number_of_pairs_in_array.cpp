class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int c=0;
        int q=0;
        for(auto i: nums){
            m[i]++;
        }
        for(auto &i:m){
            if(i.second%2==0){
                int y=i.second/2;
                c=c+y;
            }
            else{
                if(i.second>2){
                    q++;
                    int y=i.second/2;
                    c=c+y;
                }
                else{
                    q++;
                }
            }
        }
        nums.clear();
        nums.push_back(c);
        nums.push_back(q);
        return nums;
    }
};
