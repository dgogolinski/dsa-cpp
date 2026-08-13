#include <gtest/gtest.h>
#include "contains_duplicate.hpp"

TEST(ContainsDuplicateTest, ReturnsTrueForDuplicates) {
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 3};
    EXPECT_TRUE(sol.hasDuplicate(nums));
}

TEST(ContainsDuplicateTest, ReturnsFalseForUnique) {
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 4};
    EXPECT_FALSE(sol.hasDuplicate(nums));
}

TEST(ContainsDuplicateTest, HandlesNegativeNumbers) {
    Solution sol;
    std::vector<int> nums = {-1, -2, -3, -1};
    EXPECT_TRUE(sol.hasDuplicate(nums));
}
