//Input: word1 = "abc", word2 = "pqr"
//Output: "apbqcr"
//Explanation: The merged string will be merged as so:
//word1:  a   b   c
//word2:    p   q   r
//merged: a p b q c r

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        for(int i=0;i<max(word1.size(), word2.size());i++){
            if(i<word1.size()){
                str = str+word1[i];
            }
            if(i<word2.size()){
                str = str+word2[i];
            }
        }
        return str;
    }
};
