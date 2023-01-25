class Solution {
public:
    int countDigits(int num) {
        vector<int>z;
        // unordered_map<int,int> m;
        int q= num;
        int count=0;
        int a;
        while(q!=0){
            a=q%10;
            z.push_back(a);
            q=q/10;
        }
        for(int i=0;i<z.size();i++){
            if(num%z[i]==0){
                count++;
            }
        }
        return count;
    }
};
