#include <iostream>

#include "two_sum.cpp"

int main()
{
    Solution sol;

	std::vector<int> nums = {3, 3};
	int target = 6;
	std::vector<int> ret = sol.twoSum(nums, target);
	for (auto &iter : ret) {
		std::cout << " " << iter;
	}

    return (0);
}