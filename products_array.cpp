#include <iostream>
#include <vector>

using namespace std;

vector<int> products_expect_self(vector<int>& nums);
void test(vector<int>& nums);

int main(void)
{
  vector<int> nums1= {1,2,4,6};
  vector<int> nums2= {1,0,4,6};
  vector<int> nums3= {1,2,4,6,0,0};
  test(nums1);
  test(nums2);
  test(nums3);
}

vector<int> products_expect_self(vector<int>& nums)
{
  int mult=1;
  int zerocounter=0;
  for(int num: nums)
  {
    if(num ==0)
    {
      zerocounter++;
    }
    else
    {
      mult*=num;
    }
  }
  int nums_size= nums.size();
  if (zerocounter >1)
  {
    return vector<int>(nums_size,0);
  }

  vector<int> result(nums_size);
  for(int i =0; i<nums_size;i++)
  {
    if (zerocounter==1)
    {
      if(nums.at(i) ==0)
      {
        result.at(i) = mult;
      }
      else
      {
        result.at(i) = 0;
      }
    }
    else
    {
      result.at(i)=mult/nums.at(i);
    }
  }
  return result;
}

void test(vector<int>& nums)
{
  vector<int> result =products_expect_self(nums);  
  for(int num: result)
  {
    cout << num << endl;
  }
}
