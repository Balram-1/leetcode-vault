//TEMP=((right_s[1]-left_s[1])-1)x arr[1];
//ANS=MAX (TEMP,ANS);

//find left smallest , right smallest ;
//--Redo------


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();//total number of bars
        stack<int> st; // Stores indices to calculate width
        int maxArea = 0; //track largest area we tracket yet.
        
        for (int i = 0; i <= n; i++) { //loop through the array
            int currentHeight; 
            
            // Expanded if-else block instead of the ternary shortcut
            // A fake height of 0 at the end (i == n) forces the stack to empty completely
            if (i == n) {
                currentHeight = 0;
            } else {
                currentHeight = heights[i];
            }
            
            // Process the stack if we find a bar shorter than the top of the stack
            while (!st.empty() && currentHeight < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop(); 
                
                int w;
                if (st.empty()) {
                    w = i; // No smaller elements to the left, width stretches to index 0
                } else {
                    w = i - st.top() - 1; // Width is between the current index and the new top index
                }
                
                maxArea = max(maxArea, h * w);
            }
            
            st.push(i);
        }
        
        return maxArea;
    }
};