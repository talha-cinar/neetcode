#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<int> top_k_frequent(vector<int>& nums, int k);

int main(void)
{
  int k =2;
  vector<int> nums= {1,2,2,3,3,3,4,4};
  vector<int> result =top_k_frequent(nums,k );
  for(int i : result)
  {
    cout << i << endl;
  }
  
}

vector<int> top_k_frequent(vector<int>& nums, int k)
{
  vector<int> result;
  map<int,int> mmap;
  for(int s : nums)
  {
    if(mmap.find(s) == mmap.end())
    {
      mmap.insert({s,1});
    }
    else
    {
      mmap.at(s)+=1;
    }
  }
  for(auto pair : mmap)
  {
    if(pair.second ==k)
    {
      result.push_back(pair.first);
    }
  }
  return result;
}

