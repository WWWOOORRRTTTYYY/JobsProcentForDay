#include <iostream>

using namespace std;

int main() {
int price;
int m;
int n;
int money;

cout << "Введите сумму продаж за день: ";
cin >> price;

cout << "Введите процент с продаж: ";
cin >> m;

cout << "Введите стомость выхода, если имеется: ";
cin >> n;

money = (price/100 * m + n);

cout << "Вы заработали "<< money << ", поздравляем!";

return 0;
}