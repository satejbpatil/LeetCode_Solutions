class Solution {
public:
    int missingNumber(vector<int>& v) {
        int sum=0;
        int sum1=0;
        int max=0;
        int flag=0;
        for(int i=0;i<v.size();i++){
            sum=sum+v[i];
            if(max<v[i]){
                max=v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                flag=1;
                break;
            }
        }
        for(int i=0;i<=max;i++){
            sum1=sum1+i;
        }
        int ans=sum1-sum;
        if(flag==0){
            return 0;
        }
        if(ans==0){
            return (max+1);        
            }
        else{
                return ans;
            }
    }
};
