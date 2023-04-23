// 2614. Prime In Diagonal

/*
Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.

Note that:

An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.


*/

class Solution {
public:
    bool isPrime(int n){
      if(n <= 1) return false;
      for (int i = 2; i * i <= n; i++){
        if (n % i == 0)return false;
      }
      return true;
    }
    int diagonalPrime(vector<vector<int>>& v) {
      int n = v.size(), ans = INT_MIN;
      for(int i = 0; i < n; i++){
        if(isPrime(v[i][i])) ans = max(ans, v[i][i]);
        if(isPrime(v[i][n - i - 1])) ans = max(ans, v[i][n - i - 1]);
      }
      return ans == INT_MIN ? 0 : ans;
    }
};
