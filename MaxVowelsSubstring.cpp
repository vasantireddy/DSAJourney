Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Code:

class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int maxn = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                maxn++;
            }
        }
        int fin = maxn;
        for(int i=k;i<s.size();i++){
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                maxn--;
            }
            left++;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                maxn++;
            }
            fin = max(fin, maxn);
        }
        return fin;
    }
};
