class Solution {
public:
    string reverseVowels(string s) {
        if(s=="") return s;
        string result = "";
        stack<char> ch;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                ch.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                result += ch.top();
                ch.pop();
            }
            else
                result += s[i];
        }
        return result;
    }
};