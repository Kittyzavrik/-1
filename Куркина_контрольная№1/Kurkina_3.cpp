#include<iostream>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    
    double n;
    
    cout << "Введите n: ";
    cin >> n;
    double result = 6 *n*n*n - 12 *n*n -24*n;

    cout << "Ответ: " << result << endl;

    return 0;
}