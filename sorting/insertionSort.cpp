#include <iostream>

int main()
{
    using namespace std;

    char arr[] = "47586321";

    for (int i = 0, length = strlen(arr); i < length; i++)
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

    cout << "Result: " << arr << endl;
    return 0;
}