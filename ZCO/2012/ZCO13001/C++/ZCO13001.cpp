#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  long long sum = 0;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
    sum += arr[i];
  }

  sort(arr, arr + n);

  sum -= arr[0] * n;

  long long result = 0;
  for (int x = 1; x < n; x++) {
    result += sum;
    sum -= (arr[x] - arr[x - 1]) * (n - x);
  }

  printf("%lld\n", result);

  return 0;
}