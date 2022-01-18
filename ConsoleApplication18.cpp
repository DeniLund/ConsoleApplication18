#include <iostream>
#include <stack>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> Deni;  // создаем стек

    int i = 0;

    cout << "Введите шесть любых целых чисел: " << endl; // предлагаем пользователю 
                                                        // ввести 6 чисел
    while (i != 6) {
        int a;
        cin >> a;

        Deni.push(a);  // добавляем введенные числа
        i++;
    }

    if (Deni.empty()) cout << "Стек не пуст";  // проверяем пуст ли стек (нет)

    cout << "Верхний элемент стека: " << Deni.top() << endl; // выводим верхний элемент
    cout << "Давайте удалим верхний элемент " << endl;

    Deni.pop();  // удаляем верхний элемент

    cout << "А это новый верхний элемент: " << Deni.top() << '\n'; // выводим уже новый
                                                            // верхний элемент 
    system("pause");
    return 0;
}
