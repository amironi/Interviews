
string longestSubstringWithoutDup(const string s)
{
  string res;
  string max_res;
  unsigned int max = 0;
  
  unordered_map<char,unsigned int> letters;
  
  for(unsigned int i = 0 ; i < s.size(); i++)
  {
    if(letters.find(s[i]) == letters.end() )
    {
      res +=s[i];
      
      if( res.size() > max ) {
        max_res = res;
        max = res.size();
      }

    }
    else
    {
      res = s.substr(letters[s[i]]+1,i-1);
      
      cout << res << endl;
    }
    
    letters[s[i]] = i;
  }

  return max_res;
}