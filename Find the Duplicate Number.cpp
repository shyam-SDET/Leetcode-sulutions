class Solution {
public:
    int findDuplicate(vector<int>& num) {
        int fast=num[0];
        int slow=num[0];
        do{
            slow=num[slow];
            fast=num[num[fast]];
        }while(fast!=slow);
        fast=num[0];
        while(fast!=slow)
        {
            fast=num[fast];
            slow=num[slow];
        }
            
    return slow;
    }
};
