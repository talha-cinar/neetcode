#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<string>> group_anagrams(vector<string>& strs);

int main(void)
{
  vector<string> strs = {"act","pots","tops","cat","stop","hat"};
  vector<vector<string>> result= group_anagrams(strs);
  for (const auto& i : result)
  {
    cout << '{';
    for(const auto& j: i)
    {
      cout << j << ',';
    }
    cout<< '}'<< endl;
  }
  //cout << result[0][0]; 
  return 0;
}

vector<vector<string>> group_anagrams(vector<string>& strs)
{
  map<string, vector<string>> res;
  for (const auto& s : strs) 
  {
    vector<int> count(26, 0);
    for (char c : s) 
    {
      count[c - 'a']++;
    }
    string key = to_string(count[0]);
    for (int i = 1; i < 26; ++i) 
    {
      key += ',' + to_string(count[i]);
    }
    res[key].push_back(s);
  }
  vector<vector<string>> result;
  for (const auto& pair : res) 
  {
    result.push_back(pair.second);
  }
    return result;
    
}
