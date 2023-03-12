// Isomorphic strings

    bool isIsomorphic(string s, string t) {
        int n = s.size();
        bool flag = true;
        
        map<char, int> mp;
        int count = 0;
        for(int i=0; i<n; i++){
            mp[s[i]] = count;
            count++;
        }
        for(int i=0; i<n; i++){
            s[i] = mp[s[i]];
        }
        
        map<char, int> np;
        int dount = 0;
        for(int i=0; i<n; i++){
            np[t[i]] = dount;
            dount++;
        }
        for(int i=0; i<n; i++){
            t[i] = np[t[i]];
        }
        
        for(int i=0; i<n; i++){
            if(s[i] != t[i]){
                flag = 0;
                break;
            }
        }
        return flag;
    }