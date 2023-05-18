class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n= sentences.size();
        int counter;
        int ans=0;
        
        for(int i=0;i<sentences.size();i++)
        {
            int k=sentences[i].size();
            counter =1;
            for(int j=0;j<sentences[i].size();j++)
            {
                if (sentences[i] [j]==' ')
                {
                    counter++;
                }
            }
            ans=max(counter,ans);
        }
        return ans;
        
    
        
    }
};
