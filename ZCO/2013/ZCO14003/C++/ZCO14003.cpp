#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  long long arr[n];
  for (int i = 0; i < n; i++)
    scanf("%lld", &arr[i]);

  sort(arr, arr + n);

  long long result = 0;
  for (int x = 0; x < n; x++)
    if (arr[x] * (n - x) > result)
      result = (long long)(arr[x] * (n - x));

  printf("%lld\n", result);

  return 0;
}