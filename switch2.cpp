#include <iostream>
using namespace std;

int main() 
{
    int num1, num2; // 定义两个数字
    char op; // 运算符

    // 1. 输出提示 → 输入（cout 与 cin 连用）
    cout << "请输入第一个数字: ";   // 输出提示
    cin >> num1;// 输入第一个数字

    cout << "请输入运算符 (+, -, *, /): ";
    cin >> op;

    cout << "请输入第二个数字: "; // 输出提示 → 输入（cout 与 cin 连用）
    cin >> num2;   // 输入第二个数字

    // 2. 使用 switch 进行运算
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "错误,除数不能为0." << endl;
            break;
        default:
            cout << "无效的运算符！" << endl;
    }

    return 0;
}