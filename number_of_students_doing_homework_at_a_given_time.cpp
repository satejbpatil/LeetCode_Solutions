class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int count=0;
        for(int i=0;i<e.size();i++){
            if(s[i]<=q && e[i]>=q)count++;
        }   
        return count;
    }
};
