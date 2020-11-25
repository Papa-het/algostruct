#include <iostream>

std::string insertionSort(std::string arr);

int main()
{
    using namespace std;

    string arr;

    cout << "Gimme sequence of integers: ";
    cin >> arr;
    cout << "You gave me this sequence of integers: " << arr << endl;

    cout << insertionSort(arr) << endl;
    return 0;
}

std::string insertionSort(std::string arr)
{
    for (int i = 0, length = arr.length(); i < length; i++)
    {
        int element = arr[i];
        int j = i;

        do
        {
            arr[j] = arr[j - 1];
            j--;
        } while (j > 0 && arr[j - 1] > element);

        arr[j] = element;
    }

    return arr;
}