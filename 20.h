class Solution {
public:
    bool isValid(string s) {
        stack<char> sta;
        for(int i=0;i<s.length();i++)
        {
            switch(s[i])
            {
                case '(': sta.push(s[i]);break;
                case '[': sta.push(s[i]);break;
                case '{': sta.push(s[i]);break;
                case ')': if(sta.empty() || sta.top()!='(') return false; else sta.pop(); break;
                case ']': if(sta.empty() || sta.top()!='[') return false; else sta.pop(); break;
                case '}': if(sta.empty() || sta.top()!='{') return false; else sta.pop(); break;
            }
        }
        if(sta.empty()) return true;
        else return false;


    }
};