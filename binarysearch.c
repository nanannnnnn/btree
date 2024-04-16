#include "common.h"

int binarysearch(int x, int a[], int left, int right) {
  int mid; 

  while (left < right) {
    mid = (left + right) / 2; 
    if (a[mid] < x) left = mid  + 1; else right = mid; 
  }
  if (a[mid] == left) return left; 
  return -1;
}

int main() {
  int d[10] = {1, 3, 4, 6, 10, 22, 23, 25, 89, 100}; 
  int key; 
  printf("input the key"); 
  scanf("%d", &key); 

  int flag = binarysearch(key, d, 0, 9); 
  if (flag == -1) {
    printf("not found\n"); 
  } else {
    printf("found\n"); 
  }
}