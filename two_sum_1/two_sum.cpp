#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        for (std::size_t i = 0; i < nums.size(); i++)
        {
            for (std::size_t j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
	                std::vector<int>  ret = {static_cast<int>(i), static_cast<int>(j)};
	                return (ret);
				}
            }
        }
	    return {};
    }
};