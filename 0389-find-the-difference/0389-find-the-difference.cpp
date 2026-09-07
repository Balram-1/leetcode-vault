class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> freq;
        for(char c :s){
            freq[c]++;
        }
        for(char c:t){
            freq[c]--;
            if(freq[c]<0){
                return c;
            }
        }
    return 0;
        
        
    }
};


//We just took string s stored in unordered map then we subtracted string t then character with character in -ve is the character
//Time complexity: O(n)
//Space complexity: O(1)