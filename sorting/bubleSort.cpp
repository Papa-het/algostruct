#include <iostream>

std::string bubleSort(std::string arr);

int main()
{
    using namespace std;

    string arr;

    cout << "Gimme sequence of integers: ";
    cin >> arr;
    cout << "You gave me this sequence of integers: " << arr << endl;

    cout << bubleSort(arr) << endl;
    return 0;
}

std::string bubleSort(std::string arr)
{
    for (int i = 0, length = arr.length(); i < length; i++)
    {
        for (int j = 1; j < length; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }

    return arr;
}
