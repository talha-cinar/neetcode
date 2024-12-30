#include <iostream>
#include <map>

using namespace std;

bool is_valid(string str);

int main(void)
{
  string str= "([{}])";
  bool result =is_valid(str);
  cout << result<< endl;
  return 0;
}

bool is_valid(string str)
{
  int size= str.size();
  if (size%2 != 0)
  {
    return false;
  }
  map<char,char> comap = 
  {
    { '{' , '}' }, 
    { '(' , ')' },
    { '[' , ']' }
  };
  for(const auto& pair : comap)
  {
    cout << pair.first << '\t' << pair.second << endl;  

  }
  cout << size<< endl;
  for(int i=0; i<(size/2); i++)
  {
    char front = str.at(i);
    char back = str.at(size-i-1);
    cout<< front << '\t' << back << endl;
    if(comap.at(front) != back)
    {
      return false;
    }
  }
  return true;
}
