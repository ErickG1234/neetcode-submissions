#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_map<int, bool> isDup;


        for (const auto& num : nums)  {
            
            if (isDup.contains(num)) {
                return true;
            }

            isDup.insert({num, true}); 
        }
    return false;
    }
};