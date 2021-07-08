#include "most_valuable_rod_cut.h"

#include <gtest/gtest.h>

TEST(TestApp, correct1)
{
    std::vector<uint32_t> costOfRods{1, 2, 7, 6, 3};
    EXPECT_EQ(most_valuable_rod_cut(costOfRods), 9);
}
TEST(TestApp, correct2)
{
    std::vector<uint32_t> costOfRods2{4, 5, 6, 7, 7, 1, 1};
    EXPECT_EQ(most_valuable_rod_cut(costOfRods2), 28);
}
