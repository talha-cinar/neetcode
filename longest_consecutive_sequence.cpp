#include <iostream>
#include <vector>
#include <map>

using namespace std;

int longest_consecutive(vector<int> nums);

int main(void)
{
  vector<int> nums={2,20,4,10,3,4,5};
  int result =longest_consecutive(nums);
  cout << result << endl;
}

int longest_consecutive(vector<int> nums)
{
  map<int,int> result_map;
  int result =0;
  for(int num : nums)
  {
    if(!result_map[num])
    {
      
    }
  }
}
