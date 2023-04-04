class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& v) {
        vector<int> e;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                e.push_back(v[i]);
                v.erase(v.begin()+i);
                i--;
            }
            // else o.push_back(v[i]);
        }
        // v.clear();
        int q=0;
        for(int i=0;i<e.size()*2;i++){
            e.insert(e.begin()+i+1,v[i]);
            i++;
        }
        return e;
    }
};
