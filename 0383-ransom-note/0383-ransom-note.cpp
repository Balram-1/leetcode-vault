class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freq ;
        for (char c : magazine){
            freq[c]++;
        }
        for(char c : ransomNote){
            if(freq[c]==0){
                return false;
            }
            freq[c]--;

        }
        return true;
        
    }
};

//we just took one unordered map added the char and the frequency then compared it with characters of ransomNote if its 0 tehn false , if its there then we will decrese the frequency


//Let M be the length of magazine and N be the length of ransomNote
//Time complexity: O(m + n)
//Space complexity: O(1)