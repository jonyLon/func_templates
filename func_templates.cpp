#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void printArray(T arr[], int size, string text = "\n") {
    cout << text;
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template <typename T>
void fillArray(T arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;
}
char toLower(char i) {
    return ((i >= 'A' && i <= 'Z') ? i + 32 : i);
}
template <typename T>
int findFirstOccurrence(T arr[], int size, T target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int findFirstOccurrence(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (toLower(arr[i]) == toLower(target)) {
            return i;
        }
    }
    return -1;
}
int findFirstOccurrence(string arr[], int size, string target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
template <typename T>
int findLastOccurrence(T arr[], int size, T target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int findLastOccurrence(char arr[], int size, char target) {
    for (int i = size - 1; i >= 0; i--) {
        if (toLower(arr[i]) == toLower(target)) {
            return i;
        }
    }
    return -1;
}
int findLastOccurrence(string arr[], int size, string target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

template <typename T>
void randomShuffling(T arr[], int size) {
    for (size_t i = 0; i < size; i++)
    {
        int index = rand() % size;
        T tmp = arr[index];
        arr[index] = arr[i];
        arr[i] = tmp;
    }     
}


template <typename T>
void fillWithValue(T arr[], int size, T value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}
void fillWithValue(string arr[], int size, string value) {
    for (int i = 0; i < size; i++) {
        arr[i] = value;
    }
}
template <typename T>
void increasingSort(T arr[], int left, int right) {
    int tmp_l = left;
    int tmp_r = right;
    T pivot = arr[left];
    while (left < right)
    {
        while (arr[right] > pivot && left < right) right--;
        if (left != right) {
            arr[left] = arr[right];
            left++;
        }
        while (arr[left] < pivot && left < right) left++;
        if (right != left) {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot;
    int index = left;
    left = tmp_l;
    right = tmp_r;
    if (index > left) {
        increasingSort(arr, left, index - 1);
    }
    if (index < right) {
        increasingSort(arr, index + 1, right);
    }
}
//void increasingSort(string arr[], int left, int right) {
//    int tmp_l = left;
//    int tmp_r = right;
//    string pivot = arr[left];
//    while (left < right)
//    {
//        while (arr[right] > pivot && left < right) right--;
//        if (left != right) {
//            arr[left] = arr[right];
//            left++;
//        }
//        while (arr[left] < pivot && left < right) left++;
//        if (right != left) {
//            arr[right] = arr[left];
//            right--;
//        }
//    }
//    arr[left] = pivot;
//    int index = left;
//    left = tmp_l;
//    right = tmp_r;
//    if (index > left) {
//        increasingSort(arr, left, index - 1);
//    }
//    if (index < right) {
//        increasingSort(arr, index + 1, right);
//    }
//}
template <typename T>
void decreasingSort(T arr[], int left, int right) {
    int tmp_l = left;
    int tmp_r = right;
    T pivot = arr[left];
    while (left < right)
    {
        while (arr[right] < pivot && left < right) right--;
        if (left != right) {
            arr[left] = arr[right];
            left++;
        }
        while (arr[left] > pivot && left < right) left++;
        if (right != left) {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot;
    int index = left;
    left = tmp_l;
    right = tmp_r;
    if (index > tmp_l) {
        decreasingSort(arr, tmp_l, index - 1);
    }
    if (index < tmp_r) {
        decreasingSort(arr, index + 1, tmp_r);
    }
}
//void decreasingSort(string arr[], int left, int right) {
//    int tmp_l = left;
//    int tmp_r = right;
//    string pivot = arr[left];
//    while (left < right)
//    {
//        while (arr[right] < pivot && left < right) right--;
//        if (left != right) {
//            arr[left] = arr[right];
//            left++;
//        }
//        while (arr[left] > pivot && left < right) left++;
//        if (right != left) {
//            arr[right] = arr[left];
//            right--;
//        }
//    }
//    arr[left] = pivot;
//    int index = left;
//    left = tmp_l;
//    right = tmp_r;
//    if (index > tmp_l) {
//        decreasingSort(arr, tmp_l, index - 1);
//    }
//    if (index < tmp_r) {
//        decreasingSort(arr, index + 1, tmp_r);
//    }
//}


template <typename T, int Col>
void fill2DArray(T arr[][Col], int row, int col, int min, int max) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}

template <typename T, int Col>
void print2DArray(T arr[][Col], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
template <typename T, int Cols>
T maxInMatrix(T arr[][Cols], int rows, int cols)
{
    T max = arr[0][0];
    for (size_t i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

template <typename T, int Col>
bool isSort(T arr[][Col], int row, int col, int number_row) {
    if (number_row < 0 || number_row >= row) return false;
    for (size_t i = 0; i < col - 1; i++)
    {
        if (arr[number_row][i] > arr[number_row][i + 1]) {
            return false;
        }
    }
    return true;
}
template <typename T, int Col>
bool isSortAll(T arr[][Col], int row, int col) {
    for (size_t i = 0; i < row; i++)
    {
        if (!isSort(arr, row, col, i)) {
            return false;
        }
    }
    return true;
}
int main()
{
    srand(unsigned int(time(0)));
    //const int size = 10;
    //int arr_int[size]{10,2,8,4,5,6,7,8,9,1};
    //double arr_double[size]{1.5,6.1,4.6,7.8,9.5,7.9,6.1,2.6,4.1,3.1};
    //char arr_char[size]{'f','*','&','?','$','_','+','-','/','='};
    //string arr_string[size]{"Jo", "kill", "well", "dress", "whole","ack", "lol", "alchemist", "bone", "hi"};
    ////fillArray(arr_int, size);
    ////fillArray(arr_double, size);
    ////fillArray(arr_char, size);
    ////fillArray(arr_string, size);
    //printArray(arr_int, size);
    //cout << "First index of the element --> " << findFirstOccurrence(arr_int, size, 8) << endl;
    //cout << "Last index of the element --> " << findLastOccurrence(arr_int, size, 8) << endl;
    //increasingSort(arr_int, 0, 9);
    //printArray(arr_int, size, "Array sorted in an increasing order:\n");
    //decreasingSort(arr_int, 0, 9);
    //printArray(arr_int, size, "Array sorted in a decreasing order:\n");
    //randomShuffling(arr_int, size);
    //printArray(arr_int, size, "Array shuffle randomly:\n");
    //fillWithValue(arr_int, size, 8);
    //printArray(arr_int, size, "Array filled with value 8:\n");

    //printArray(arr_double, size);
    //cout << "First index of the element --> " << findFirstOccurrence(arr_double, size, 6.1) << endl;
    //cout << "Last index of the element --> " << findLastOccurrence(arr_double, size, 6.1) << endl;
    //increasingSort(arr_double, 0, 9);
    //printArray(arr_double, size, "Array sorted in an increasing order:\n");
    //decreasingSort(arr_double, 0, 9);
    //printArray(arr_double, size, "Array sorted in a decreasing order:\n");
    //randomShuffling(arr_double, size);
    //printArray(arr_double, size, "Array shuffle randomly:\n");
    //fillWithValue(arr_double, size, 8.3);
    //printArray(arr_double, size, "Array filled with value 8.3:\n");




    //printArray(arr_char, size);
    //cout << "First index of the element --> " << findFirstOccurrence(arr_char, size, 6.1) << endl;
    //cout << "Last index of the element --> " << findLastOccurrence(arr_char, size, 6.1) << endl;
    //increasingSort(arr_char, 0, 9);
    //printArray(arr_char, size, "Array sorted in an increasing order:\n");
    //decreasingSort(arr_char, 0, 9);
    //printArray(arr_char, size, "Array sorted in a decreasing order:\n");
    //randomShuffling(arr_char, size);
    //printArray(arr_char, size, "Array shuffle randomly:\n");
    //fillWithValue(arr_char, size, '*');
    //printArray(arr_char, size, "Array filled with value *:\n");


    //printArray(arr_string, size);
    //cout << "First index of the element --> " << findFirstOccurrence(arr_string, size, "Jo") << endl;
    //cout << "Last index of the element --> " << findLastOccurrence(arr_string, size, "ack") << endl;
    //increasingSort(arr_string, 0, 9);
    //printArray(arr_string, size, "Array sorted in an increasing order:\n");
    //decreasingSort(arr_string, 0, 9);
    //printArray(arr_string, size, "Array sorted in a decreasing order:\n");
    //randomShuffling(arr_string, size);
    //printArray(arr_string, size, "Array shuffle randomly:\n");
    //fillWithValue(arr_string, size, "******");
    //printArray(arr_string, size, "Array filled with value ******:\n");


    const int row = 4, col = 3;
    int arr2d_int[row][col]{};
    fill2DArray(arr2d_int, row, col, 0, 50);
    print2DArray(arr2d_int, row, col);
    cout << endl;
    cout << "Max element --> " << maxInMatrix(arr2d_int, row, col) << endl;
    cout << "Is row 3 sorted --> " << boolalpha << isSort(arr2d_int, row, col, 3) << endl;
    cout << "Is array sorted --> " << boolalpha << isSortAll(arr2d_int, row, col) << endl;
    cout << endl;
    string arr2d_string[row][col]{
        {"alpha", "bool", "int"},{"Jo","Zo","hi"},{"whole","ack", "lol"},{"miss", "bone", "hi"}};
    print2DArray(arr2d_string, row, col);
    cout << endl;
    cout << "Max element --> " << maxInMatrix(arr2d_string, row, col) << endl;
    cout << "Is row 3 sorted --> " << boolalpha << isSort(arr2d_string, row, col, 3) << endl;
    cout << "Is array sorted --> " << boolalpha << isSortAll(arr2d_string, row, col) << endl;
}   

