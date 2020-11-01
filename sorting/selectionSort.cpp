#include <iostream>

int main()
{
    using namespace std;
    char arr[] = "475139286";

    for (int i = 0, length = strlen(arr); i < (length - 1); i++)
    {
        int j = i + 1;

        for (; j < length; j++)
        {
            if (arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    cout << "Result: " << arr << endl;
    return 0;
}