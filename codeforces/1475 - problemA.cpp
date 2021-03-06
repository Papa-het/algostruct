// A. Нечетный делитель
// ограничение по времени на тест2 секунды
// ограничение по памяти на тест256 мегабайт
// вводстандартный ввод
// выводстандартный вывод
// Вам дано целое число 𝑛. Проверьте, есть ли у 𝑛 нечетный делитель, отличный от единицы (существует ли такое число 𝑥 (𝑥>1), что 𝑛 делится на 𝑥 и 𝑥 нечетно).

// Например, если 𝑛=6, то существует 𝑥=3. Если же 𝑛=4, то такого числа не существует.

// Входные данные
// В первой строке записано одно целое число 𝑡 (1≤𝑡≤104) — количество наборов входных данных. Далее следуют 𝑡 наборов входных данных.

// Каждый набор входных данных содержит одно целое число 𝑛 (2≤𝑛≤1014).

// Обратите внимание, что числа в некоторых наборах входных данных не влезают в 32-битный целочисленный тип, поэтому вы должны использовать как минимум 64-битный целочисленный тип вашего языка программирования.

// Выходные данные
// Для каждого набора входных данных в отдельной строке выведите:

// «YES», если у 𝑛 есть нечетный делитель отличный от единицы;
// «NO» в противном случае.
// Вы можете выводить «YES» и «NO» в любом регистре (например, строки yEs, yes, Yes и YES будут распознаны как положительный ответ).

// Пример
// входные данные
// 6
// 2
// 3
// 4
// 5
// 998244353
// 1099511627776
// выходные данные
// NO
// YES
// NO
// YES
// YES
// NO


#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x = 2;
        long long int n;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (n % 2 == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        while (x * 2 <= n)
        {
            if (n % x == 0 && x % 2 == 1)
            {
                cout << "YES" << endl;
                break;
            }
            x += 1;
        }
    }
    return 0;
}