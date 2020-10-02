#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>

#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

class Solution {
public:
  bool iseq(int t1, int b1, int t2, int b2) {
    // PV4(t1, b1, t2, b2);
    return (t1 * b2 == t2 * b1);
  }

  bool checkStraightLine(vector<vector<int>> &coordinates) {
    int dx = coordinates[0][0] - coordinates[1][0];
    int dy = coordinates[0][1] - coordinates[1][1];
    for (int i = 2; i < coordinates.size(); ++i) {
      int dx2 = coordinates[i - 1][0] - coordinates[i][0];
      int dy2 = coordinates[i - 1][1] - coordinates[i][1];
      if (!iseq(dx, dy, dx2, dy2))
        return false;
    }
    return true;
  }
};

void test1() {
  vector<vector<int>> coordinates{vector<int>{1, 2}, vector<int>{2, 3}, vector<int>{3, 4},
                                  vector<int>{4, 5}, vector<int>{5, 6}, vector<int>{6, 7}};

  cout << "1 ? " << Solution().checkStraightLine(coordinates) << endl;
}

void test2() {

}

void test3() {

}