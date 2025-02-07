class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mp={{2,\abc\},{3,\def\},{4,\ghi\},
                                    {5,\jkl\},{6,\mno\},{7,\pqrs\},
                                    {8,\tuv\},{9,\wxyz\}};
        vector<string>ans;
        int n=digits.length();
        if(n==0)
            return ans;
        if(n==1){
            string s=mp[digits[0]-'0'];
            for(int i=0;i<s.length();i++){
                string t=\\;
                t+=s[i];
                ans.push_back(t);
            }
        }else if(n==2){
            string s1=mp[digits[0]-'0'];
            for(int i=0;i<s1.length();i++){
                string s2=mp[digits[1]-'0'];
                for(int j=0;j<s2.length();j++){
                    string t=\\;
                    t+=s1[i];
                    t+=s2[j];
                    ans.push_back(t);
                }
            }
        }else if(n==3){
            string s1=mp[digits[0]-'0'];
            for(int i=0;i<s1.length();i++){
                string s2=mp[digits[1]-'0'];
                for(int j=0;j<s2.length();j++){
                    string s3=mp[digits[2]-'0'];
                    for(int k=0;k<s3.length();k++){
                        string t=\\;
                        t+=s1[i];
                        t+=s2[j];
                        t+=s3[k];
                        ans.push_back(t);
                    }
                }
            }
        }else{
           string s1=mp[digits[0]-'0'];
            for(int i=0;i<s1.length();i++){
                string s2=mp[digits[1]-'0'];
                for(int j=0;j<s2.length();j++){
                    string s3=mp[digits[2]-'0'];
                    for(int k=0;k<s3.length();k++){
                        string s4=mp[digits[3]-'0'];
                        for(int l=0;l<s4.length();l++){
                            string t=\\;
                            t+=s1[i];
                            t+=s2[j];
                            t+=s3[k];
                            t+=s4[l];
                            ans.push_back(t);
                        }
                    }
                }
            } 
        }
        return ans;
    }
};