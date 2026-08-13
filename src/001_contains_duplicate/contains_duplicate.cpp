#include "contains_duplicate.hpp"
#include <unordered_set>

bool Solution::hasDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (auto num : nums) {
        if (!seen.insert(num).second) {
            return true;
        }
    }

    return false;
}
