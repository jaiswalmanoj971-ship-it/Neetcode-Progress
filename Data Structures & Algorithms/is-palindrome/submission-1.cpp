class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;

        while(i<j){
            if(!isalnum(s[i])){
                i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if( s[i]==s[j]  ||
            (isalpha(s[i]) && isalpha(s[j]) &&
            (s[i]-32==s[j] || s[i]+32==s[j]))){ 
                i++;j--;

            }
            else{
                return false;
            } 
            
        }
        return true;
        
    }
};
