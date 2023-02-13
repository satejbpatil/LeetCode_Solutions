class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n, vector<int>& m) {
        map<int,int> s;
        for(auto i:n){
            s[i]++;
        }

        map<int,int> p;
        for(auto i:m){
            p[i]++;
        }

        n.clear();
        m.clear();
        for(auto &i:s){
            // cout<<i.first<<" "<<i.second<<endl;
            n.push_back(i.first);
        }
        for(auto &i:p){
            m.push_back(i.first);
        }

        vector<vector<int>> a;
        for(int i=0;i<n.size();i++){
            int q=0;
            for (int j=0;j<m.size();j++){
                if(n[i]==m[j]){
                    q=1;
                    m.erase(m.begin()+j);
                    j--;
                }
            }
            if(q==1){
                 n.erase(n.begin()+i);
                    i--;
            }
        }
        
        
        
        a.push_back(n);
                a.push_back(m);

                return a;

    }
};
