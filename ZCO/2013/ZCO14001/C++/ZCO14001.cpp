#include <iostream>

using namespace std;

int main() {
  int widthBox, heightBox;
  scanf("%d %d", &widthBox, &heightBox);

  int box[widthBox];
  for (int i = 0; i < widthBox; i++)
    scanf("%d", &box[i]);

  int hookLocation = 0, holding = 0;
  int input = 0;
  while (cin >> input) {
    switch (input) {
      case 1:
        if (hookLocation > 0)
          hookLocation--;
        break;
      case 2:
        if (hookLocation < widthBox - 1)
          hookLocation++;
        break;
      case 3:
        if (holding == 0 && box[hookLocation] > 0) {
          holding++;
          box[hookLocation]--;
        }
        break;
      case 4:
        if (holding == 1 && box[hookLocation] < heightBox) {
          holding--;
          box[hookLocation]++;
        }
        break;
      case 0:
        break;
    }
  }

  for (int i = 0; i < widthBox; i++)
    printf("%d ", box[i]);

  return 0;
}