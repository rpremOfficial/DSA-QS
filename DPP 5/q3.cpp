// not working 
    
    bool isScramble(string s1, string s2) {
        int n =  s1.size();
        
        if(s1.compare(s2) == 0){
            return true;
        }
        
        for(int i=0; i<n; i++){
            if(isScramble(s1.substr(0, i), s2.substr(n-i, i)) && isScramble(s1.substr(i), s2.substr(0, n-i))){
                return true;
            }
        }
        
        return false;
    }

// will be updating soon...