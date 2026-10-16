class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        map<char,int>mp;

        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }

        for(int i=0;i<=s2.size()-s1.size();i++){
            map<char,int>temp;
            for(int j=i;j<i+s1.size();j++){
                temp[s2[j]]++;

            }
            if(mp==temp) return true;
        }
        return false;
        
    }
};
