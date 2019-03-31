#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> hashtable{
        ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> s;

    for (const string& w : words) {
      string result = "";
      for (const char& ch : w) {
        result += hashtable[ch - 'a'];
      }
      s.insert(result);
    }
    return s.size();
  }
};