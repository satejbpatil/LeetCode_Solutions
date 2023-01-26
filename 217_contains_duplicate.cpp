class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        int flag=0;
        map<int,int>m;
        for(auto i:v){
            m[i]++;
        }
        v.clear();
        for(auto &i:m){
            if(i.second>=2){
                flag=1;
                break;
            }
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};
