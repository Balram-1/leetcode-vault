class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(char c: s){
            freq[c]++;
        }
        for(int i=0;i<s.size();i++){
            char Current = s[i]; //takeing the current character from the string
            int count=freq[Current]; // checking frequency
            if(count==1){
                return i;
            }
        }
        return -1;
        
    }
};
//we used a unordered map , we added teh frequency then we started a loop and we compared if we found any character with 1 freq then reutrn if nothing found hten -1

//Time complexity : O(n)
//Space complexity : O(n)