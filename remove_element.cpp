class Solution {
public:
    int removeElement(vector<int>& v, int a) {
        for(int i=0;i<v.size();i++){
            if(v[i]==a){
                v.erase(v.begin()+i);
                i--;
            }
        }
        return v.size();
    }
};
