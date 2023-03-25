class Solution {
public:
    int distinctIntegers(int n) {
        set<int> s;
        for(int i=2;i<=n;i++){
            for(int j=2;j<=n;j++){
            if(i%j==1){
                s.insert(j);
            }
            }
        }
        return s.size()+1;
    }
};
