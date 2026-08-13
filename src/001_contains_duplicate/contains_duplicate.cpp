#include <unordered_set>
#include <vector>

class Solution {
public:
    std::unordered_set<int> seen;

    bool hasDuplicate(std::vector<int>& nums) {
        for (auto num : nums) {
            if (!seen.insert(num).second)
                return true;
        }

        return false;
    }
};
