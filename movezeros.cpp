#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int loop = nums.size();
		for (auto i = 0; i<loop; ++i) {
			if (nums.at(i) == 0) {
				nums.push_back(0);
				nums.erase(nums.begin() + i);
				--i;
				--loop;
			}
		}
	}
};