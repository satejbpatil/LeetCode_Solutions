class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        int n=v.size();
        // int i=0;
        int ans;
        for(int i=0;i<v.size();i++){
            if(t<=v[i]){
                ans=i;
                break;
            }
            else ans=v.size();
        }
        return ans;
    }
};
