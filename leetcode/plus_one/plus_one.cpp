#include <vector>
using namespace std;
class PlusOne {
 public:
  vector<int> plusOne(vector<int> &digits) {
    int carry = 1;
    int pointer = digits.size() - 1;
    while (carry > 0 && pointer >= 0) {
      int sum = (digits[pointer] + carry);
      carry = sum / 10;
      digits[pointer] = sum % 10;
      pointer--;
    }
    if (carry > 0) {
      digits.insert(digits.begin(), 1);
    }
    return digits;
  }
};