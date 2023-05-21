class Solution {
public:
    int minLength(string s) {
        stack<char> stk;

    for (char c : s) {
        if (!stk.empty() && c == 'B' && stk.top() == 'A') {
            stk.pop();
        } else if (!stk.empty() && c == 'D' && stk.top() == 'C') {
            stk.pop();
        } else {
            stk.push(c);
        }
    }

    return stk.size();
}


        
    
};
