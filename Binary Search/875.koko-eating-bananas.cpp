#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int nmin = 1, nmax = *max_element(piles.begin(), piles.end());
            while (nmin <= nmax) {
                int mid = (nmin + nmax) / 2;
                long int num = 0;
                for (int n : piles) {
                    num += (n + mid - 1) / mid;
                }

                if (num <= h) {
                    nmax = mid - 1;
                } else {
                    nmin = mid + 1;
                }
            }
            return nmin;
        }
};

int main() {
    Solution sol;
    vector<int> a = {3, 6, 7, 11};
    int num = 8;
    cout << sol.minEatingSpeed(a, num) << endl;

    return 0;
}