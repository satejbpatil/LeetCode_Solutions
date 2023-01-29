class Solution {
public:
    int findTheDistanceValue(vector<int>& v, vector<int>& v1, int d) {
        int q;
        int a=0;
        
        for(int i=0;i<v.size();i++){
            int sum=0;
            for(int j=0;j<v1.size();j++){
                q=abs(v[i]-v1[j]);
                if(q<=d){
                    sum=1;
                    break;
                }
            }
            if(sum==0)a++;
        }
        return a;
    }
};
