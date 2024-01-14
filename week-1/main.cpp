#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }
  return {};
}

int main() {

  vector<int> nums {5, 3, 9, 15, 4}; 
  int target = 12;
  
  vector<int> indices = twoSum(nums, target);
  
  if(!indices.empty()) {
    cout << "The indices that sum to " << target << " are: ";
    for(int index : indices) {
      cout << index << " "; 
    }
  } else {
    cout << "No two indices found that sum to " << target;
  }

  return 0;
}
