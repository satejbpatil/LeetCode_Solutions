class Solution {
public:
    int heightChecker(vector<int>& v) {
        vector<int> v1=v;
        int c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
           if(v[i]!=v1[i])c++;
        }
        return c;
    }
};
