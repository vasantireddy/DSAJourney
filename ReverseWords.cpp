Input: s = "the sky is blue"
Output: "blue is sky the"

Code:
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word){
            words.push_back(word);
        }
        string res;
        for(int i=words.size()-1;i>=0;i--){
            res = res + words[i];
            if(i !=0){
                res = res + " ";
            }
        }
        return res;
    }
};
