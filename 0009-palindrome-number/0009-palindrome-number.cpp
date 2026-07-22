//Approach : for negative number we already added if condition if number is less then 0 then it will reutrn false 

//for the other numbers it will store number in temp
//then it will run while loop until x!=0 and it reverse the number and stores in rev

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        int digit=0;
        long rev=0;
        while(x!=0){
            digit=x%10;
            x=x/10;
            rev=rev*10+digit;

        }

        if(rev==temp){
            return true;
        }else {
            return false;
        }



    }    
    
};

//Time complexity : O(N)
//Space complexity : O(1)