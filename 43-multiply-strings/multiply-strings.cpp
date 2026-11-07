class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size(), m = num2.size();

        if (num1 == "0" || num2 == "0") return "0";

        vector<int> ans(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');

                int sum = mul + ans[i + j + 1];

                ans[i + j + 1] = sum % 10;
                ans[i + j] += sum / 10;
            }
        }

        string result;

        for (int x : ans) {
            if (!result.empty() || x != 0)
                result += to_string(x);
        }

        return result;
    }
};