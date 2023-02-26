class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        vector<int> a;
        for(int i=0;i<v.size();i++){
            if(v[i]==t) a.push_back(i);
        }
        if(a.size()>1) return {a[0],a[a.size()-1]};
        if(a.size()==1){
            a.push_back(a[0]);
            return a;
        }

        return {-1,-1};
    }
};
