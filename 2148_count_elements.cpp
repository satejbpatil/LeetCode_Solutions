class Solution {
public:
    int countElements(vector<int>& v) {
        int m=*max_element(v.begin(),v.end());
        int m1=v[0];
        int c=0;
        for(auto i:v){
            if(m1>i) m1=i;
        }

        for(auto i:v){
            if(i<m && i>m1) c++;
        }
        
        return c;
    }
};
