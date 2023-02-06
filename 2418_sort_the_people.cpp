class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string>m;
        for(int i=0;i<h.size();i++){
            for(int j=0;j<n.size();j++){
                if(i==j){
                    int a=h[i];
                    m[a]=n[j];
                }
            }
        }
        n.clear();
        for(auto &i:m){
            n.push_back(i.second);
        }
        reverse(n.begin(),n.end());
        return n;
    }
};
