3 step :
1. Inset n into set
2. Reverse n and intesert it to set
3. Ans is the size of the set
*/

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(auto n: nums){
            s.insert(n);
            //reverse n 
            int r = 0;
            while(n){
                r = r*10 + n%10;
                n = n/10;
            }
            s.insert(r);
        }
        return s.size();
    }
};