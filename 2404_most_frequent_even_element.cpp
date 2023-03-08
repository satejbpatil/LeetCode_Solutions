class Solution {
public:
    int mostFrequentEven(vector<int>& v) {
        map<int,int> m;
        for(auto i:v){
            if(i%2==0) m[i]++;
        }
        if(m.size()==0) return -1;
        int s=0;
        int a;
        for(auto &i:m){
            if(s<i.second){
                s=i.second;
                a=i.first;
            }
        }
        return a;
    }
};
