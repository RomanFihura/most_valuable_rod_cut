#include "most_valuable_rod_cut.h"

uint32_t most_valuable_rod_cut(const std::vector<uint32_t> &costOfRods)
{
    std::vector<uint32_t> highest_value(costOfRods.size() + 1, 0);
    for (uint32_t y = 1; y <= costOfRods.size(); y++)
    {
        for (uint32_t j = 0; j < costOfRods.size(); j++)
        {
            if (j < y)
            {
                highest_value[y] =
                    std::max(highest_value[y], highest_value[y - j - 1] + costOfRods[j]);
            }
        }
    }
    return highest_value[costOfRods.size()];
}