class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum=sum+v[i];
            v[i]=sum;
        }
        return v;
    }

};
