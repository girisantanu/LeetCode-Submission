class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                char smallest = min(s[left], s[right]);
                s[left] = smallest;
                s[right] = smallest;
            }
            left++;
            right--;
        }
        
        return s;
        
    }
};
