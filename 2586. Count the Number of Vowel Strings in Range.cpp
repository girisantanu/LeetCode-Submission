class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            return true;
        }

        return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(isvowel(words[i].front()) && isvowel(words[i].back()))
            {
                ans++;
            }
        }
        return ans;

    }
};
