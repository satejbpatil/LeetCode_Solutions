class Solution {
public:
    int findDuplicate(vector<int>& v) {
        map<int,int> m;
        int a;
        for(auto i:v){
            m[i]++;
        }
        for(auto &i:m){
            if( i.second>=2){
                a=i.first;
            }
        }
        return a;
    }
};
