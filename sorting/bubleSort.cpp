#include <iostream>

int main()
{
    using namespace std;

    char arr[] = "47586321";

    for (int i = 0, length = strlen(arr); i < length; i++)
    {
        for (int j = 1; j < length; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    cout << "Result: " << arr << endl;
    return 0;
}