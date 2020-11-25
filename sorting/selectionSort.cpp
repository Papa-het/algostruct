#include <iostream>

std::string selectionSort(std::string arr);

int main()
{
    using namespace std;
    string arr;

    cout << "Gimme sequence of integers: ";
    cin >> arr;
    cout << "You gave me this sequence of integers: " << arr << endl;

    cout << selectionSort(arr) << endl;
    return 0;
}

std::string selectionSort(std::string arr)
{
    for (int i = 0, length = arr.length(); i < (length - 1); i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    return arr;
}
