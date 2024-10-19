class Solution {
   public:
    string roundToNearest(string str) {
        int n = str.size();
        if (str.back() <= '5') {
            str.back() = '0';
        } else {
            int carry = 10 - (str.back() - '0');
            for (int i = n - 1; carry and i >= 0; i--) {
                carry += str[i] - '0';
                str[i] = '0' + (carry % 10);
                carry /= 10;
            }
            if (carry) str.insert(str.begin(), carry + '0');
        }
        return str;
    }
};
