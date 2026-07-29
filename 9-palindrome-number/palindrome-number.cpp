class Solution {
public:
    bool helper(string &s, int i) {
        int n = s.size();

        if (i>=n-i-1) {
            return true;
        }
        if (s[i]!=s[n-i-1]) {
            return false;
        }
        return helper(s,i+1);
    }

    bool isPalindrome(int x) {
        if (x<0)
            return false;

        string s = to_string(x);
        return helper(s,0);
    }
};