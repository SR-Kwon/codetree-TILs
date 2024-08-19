#include <iostream>
using namespace std;

#define MAX_N 100000
int arr[MAX_N];
void arr_swap(int i, int j);
int partition(int low, int high);
void quick_sort(int low, int high);
void print_arr();

void print_arr(){
    for(int i = 0; i < 6; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void arr_swap(int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            arr_swap(i, j);
        }
    }

    arr_swap(i + 1, high);

    return i + 1;
}

void quick_sort(int low, int high){
    if(low < high){
        int pos = partition(low, high);

        quick_sort(low, pos - 1);
        quick_sort(pos + 1, high);
    }
}

int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(0, n - 1);

    print_arr();
   
    return 0;
}