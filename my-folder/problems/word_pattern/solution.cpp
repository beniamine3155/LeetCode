class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char,string> map1;
    map <string,bool> map2;
    string word;
    vector<string> v;
    stringstream ss(s);
    while(ss >>word)
    {
        v.push_back(word);   
    }
    
    if(pattern.length() != v.size())
    {
        return false;
    }
    
    for(int i = 0;i<pattern.length();i++)
    {
        if(map1.find(pattern[i]) != map1.end())
        {
            if(map1[pattern[i]] != v[i])
            {
                return false;
            }
        }
        else{
            if(map2.find(v[i]) != map2.end())
            {
                return false;
            }
            else{
                map1[pattern[i]] = v[i];
                map2[v[i]] = true;
            }
        }
    }
    return true;
}
    
};