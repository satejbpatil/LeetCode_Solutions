class Solution {
public:
    void moveZeroes(vector<int>& v) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                ans.push_back(v[i]);
            }
            else{
                count++;
            }
        }
        // cout<<count<<endl;
        for(int i=0;i<count;i++){
            ans.push_back(0);
        }
        v.clear();
        v=ans;
    }
};
