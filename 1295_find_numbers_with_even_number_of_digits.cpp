class Solution {
public:
    int findNumbers(vector<int>& v) {
        vector<int> z;
        int c=0;
        int q=0;
        int i=0;
        // for(int i=0;i<v.size();i++){
            while(i<v.size() && v[i]!=0){
                int a=v[i]%10;
                c++;
                v[i]=v[i]/10;
                cout<<c;

                if(v[i]==0){
                    cout<<"++";
                    if(c%2==0) q++;
                    c=0;
                    i++;
                }
            }
            
           
        // }
        return q;
    }
};
