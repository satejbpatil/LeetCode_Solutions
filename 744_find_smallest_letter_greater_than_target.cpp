class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {

        // sort(l.begin(),l.end());
        // for(auto i:l)cout<<i<<" ";
        for(auto i:l)
        {
            if(i>target)return i;
        }
        return l[0];
    }
};
