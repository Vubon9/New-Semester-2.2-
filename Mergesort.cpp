#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int temp[100], i = l, j = m + 1, k = 0;

    while (i <= m && j <= r)
        temp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];

    for (i = 0; i < k; i++)
        a[l + i] = temp[i];
}

void sort(int a[], int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;
    sort(a, l, m);
    sort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int a[] = {3, 1, 4, 2};
    sort(a, 0, 3);

    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
}
