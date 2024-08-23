#include <iostream>
using namespace std;

int arr[100000];

void swap(int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

void heapify(int n, int i){
  int largest = i;
  int l = i * 2;
  int r = i * 2 + 1;

  if(l <= n && arr[l] > arr[largest]) largest = l;
  if(r <= n && arr[r] > arr[largest]) largest = r;

  if(largest != i){
    swap(i, largest);
    heapify(n, largest);
  }
}

void heap_sort(int n){
  for(int i = n / 2; i >= 1; i--){
    heapify(n, i);
  }
  for(int i = n; i > 1; i--){
    swap(1, i);
    heapify(i - 1, 1);
  }
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
      cin >> arr[i];
    }

    heap_sort(n);

    for(int i = 1; i <= n; i++){
      cout << arr[i] << ' ';
    }

    return 0;
}