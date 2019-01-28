#include <iostream>
#include <cassert>

using namespace std;

class PowerOfTwo {
  public:
    static bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    cout << "Tests: PowerOfTwo:" << endl;
    assert(PowerOfTwo::isPowerOfTwo(2) == true);
    assert(PowerOfTwo::isPowerOfTwo(4) == true);
    assert(PowerOfTwo::isPowerOfTwo(5) == true);
    return 0;
}