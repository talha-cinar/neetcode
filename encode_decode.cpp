#include <iostream>
#include <vector>

using namespace std;

string encode(vector<string>& strs);
vector<string> decode(string s);

int main(void)
{
  vector<string> strs = {"hmmmmm", "code", "string", "vector"}; 
  string encoded = encode(strs);
  cout << encoded << endl <<endl;
  vector<string> result =decode(encoded);
  for( string word : result)
  {
    cout << word << endl;
  }
}

string encode(vector<string>& strs)
{
  string encoded;
  for(string word: strs)
  {
    encoded += to_string(word.size()) + "!" + word; 
  }
  return encoded;
}

vector<string> decode(string s)
{
  vector<string> decoded;
  int length=0;
  int i =0;
  int j =0;
  while(i<s.size())
  {
    for(j=i; s[j] != '!'; j++);
    //cout<< "out of inner loop" << endl;
    length = stoi(s.substr(i,j));
    cout << length <<endl; 
    cout << j << endl;
    cout <<s.substr(j+1,length) << endl;
    decoded.push_back(s.substr(j+1,length));
    i = j+1+length;
  }
  return decoded;
}
