class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double k;
        double F;
        k = celsius + 273.15;
        F = celsius * 1.80 + 32.00;

        ans.push_back(k);
        ans.push_back(F);

return ans;
    }
};
