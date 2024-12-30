#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> two_sum(vector<int>& nums, int target);

int main(void)
{
  vector<int> nums = {4,5,6};
  int target = 10;
  auto solution = two_sum(nums , target);
  cout << solution.at(0) << '\t' << solution.at(1)<< endl;
}

vector<int> two_sum(vector<int>& nums, int target)
{
  map<int,int> map;

  for (int i=0; i<nums.size(); i++)
  {
    int diff= target - nums.at(i); 
    if (map.find(diff) != map.end())
    {
      return {map[diff],i};
    }
    map.insert({nums.at(i),diff});
  }
  return {};
}
