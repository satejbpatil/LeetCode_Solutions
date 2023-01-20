class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v) {
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            int count=0;
            for(int j=0;j<v.size();j++){
                if(i!=j){
                    if(v[i]>v[j]){
                        count++;
                        // if(v[j]==v.size()-1){
                        //     ans.push_back(count);
                        // }
                    }
                }
                // ans.push_back(count);
            }
            ans.push_back(count);
        }
        return ans;
    }
};
how_many_numbers_are_smaller_than_the_current_number.cpp
