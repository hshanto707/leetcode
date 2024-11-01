class Solution {
public:
  int countPrimes(int n) {
    if (n == 0 || n == 1) return 0;
    else {
      vector<bool> isPrime(n, true);
      isPrime[0] = isPrime[1] = false;
      int count = 0;

      for (int i = 1; i * i < n; i++) {
        if (isPrime[i]) {
          for (int j = i * i; j < n; j += i) {
            isPrime[j] = false;
          }
        }
      }

      for (int i = 0; i < n; i++) {
        if (isPrime[i]) count++;
      }

      return count;
    }
  }
};