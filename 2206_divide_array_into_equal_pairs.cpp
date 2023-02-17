class Solution {
public:
    bool divideArray(vector<int>& v) {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i+=2){
            if(v[i]!=v[i+1])return false;
        }
       
        return true;
    }
};
