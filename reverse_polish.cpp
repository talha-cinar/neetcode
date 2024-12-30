#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int evalPRN(vector<string>& tokens);

int main(void)
{
  vector<string> tokens = {"1","2","+","3","*","4","-"};
  int result =evalPRN(tokens);
  cout << result << endl;
}

int evalPRN(vector<string>& tokens)
{
  stack<int> nums;
  for( string token : tokens)
  {
    int a=0;
    int b=0;
    switch ( token.at(0))
    {
      case '+':
        a = nums.top();
        nums.pop();
        b = nums.top();
        nums.pop();
        nums.push(b+a);
      break;

      case '-' :  
        a = nums.top();
        nums.pop();
        b = nums.top();
        nums.pop();
        nums.push(b-a);
      break;

      case '*' :  
        a = nums.top();
        nums.pop();
        b = nums.top();
        nums.pop();
        nums.push(b*a);
      break;

      case '/' :  
        a = nums.top();
        nums.pop();
        b = nums.top();
        nums.pop();
        nums.push(b/a);
      break;

      default:
        nums.push(stoi(token));
    }

  }
  return nums.top();
}

