#include "header.h"

using namespace std;

int main() {
    int ar[] = {5,9,3,7,2,1,0,8,4};
    cout << "Before: ";
    copy(begin(ar),end(ar),ostream_iterator<int>(cout,", "));
    cout << endl << "After:  ";
    InsertionSort(ar,9);
    copy(begin(ar),end(ar),ostream_iterator<int>(cout,", "));
    cout << endl;
}

int InsertionSort(int ar[], int num ) {
    int key;
    for (int i = 1; i < num; i++) {
        key = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j+1] = ar[j];
            j = j - 1;
        }
        ar[j+1] = key;
    }
}