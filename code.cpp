#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int>nums = {2,7,11,15};
  vector<int>pair = twoSum(nums,9);
  cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
  return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {
    int front = 0, rear = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while(front < rear) {
      int sum = nums[front] + nums[rear];
      if (sum == target)
        break;
      else if (sum > target)
        rear--;
      else
        front++;
    }
    return {front, rear};
};

