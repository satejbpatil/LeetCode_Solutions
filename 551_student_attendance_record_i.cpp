class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
                int c=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                count++;
                if(count==2)return false;
            }
            if(s[i]=='L'){
                c++;
                if(c==3)return false;
            }
            else{
                c=0;
            }
        }
        return true;
    }
};
