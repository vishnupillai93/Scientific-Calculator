#include<bits/stdc++.h>
#include <cstdlib>
#include <cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void square();
void cube();
void factorial();
void squareroot();
void exponential();
void sine();
void cosine();
void tangent();
void combination();
void permutation();
void matrixadd();
void matrixmul();
void inttobin();
void bintodec();
void inttooct();
void octtodec();

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    cout << "Welcome to the scientific calculator!!\n\n";
    int choice;
    cout << "\n*******Press 0 to quit the program*******\n";
    cout << "Enter 1 for Addition\n";
    cout << "Enter 2 for Subtraction\n";
    cout << "Enter 3 for Multiplication\n";
    cout << "Enter 4 for Division\n";
    cout << "Enter 5 for Modulus\n";
    cout << "Enter 6 for Power\n";
    cout << "Enter 7 for Factorial\n";
    cout << "Enter 8 for Square\n";
    cout << "Enter 9 for Cube\n";
    cout << "Enter 10 for Square root\n";
    cout << "Enter 11 for exponential\n";
    cout << "Enter 12 for sin(x)\n";
    cout << "Enter 13 for cos(x)\n";
    cout << "Enter 14 for tan(x)\n";
    cout << "Enter 15 for value of nCr\n";
    cout << "Enter 16 for value of nPr\n";
    cout << "Enter 17 for value of matrix addition\n";
    cout << "Enter 18 for value of matrix multiplication\n";
    cout << "Enter 19 for Decimal to binary conversion\n";
    cout << "Enter 20 for binary to decimal conversion\n";
    cout << "Enter 21 for decimal to octal conversion\n";
    cout << "Enter 22 for octal to decimal conversion\n";

    while (true) {
        cout << "\n\nEnter the operation you want to do: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulo();
                break;
            case 6:
                power();
                break;
            case 7:
                factorial();
                break;
            case 8:
                square();
                break;
            case 9:
                cube();
                break;
            case 10:
                squareroot();
                break;
            case 11:
                exponential();
                break;
            case 12:
                sine();
                break;
            case 13:
                cosine();
                break;
            case 14:
                tangent();
                break;
            case 15:
                combination();
                break;
            case 16:
                permutation();
                break;
            case 17:
                matrixadd();
                break;
            case 18:
                matrixmul();
                break;
            case 19:
                inttobin();
                break;
            case 20:
                bintodec();
                break;
            case 21:
                inttooct();
                break;
            case 22:
                octtodec();
                break;
            case 0:
                exit(0);
        }
    }
    return 0;
}

void addition() {
    cout << "Enter the numbers you want to add:";
    int a, b;
    cin >> a >> b;
    cout << "The sum of a and b is " << a + b << endl;
}

void subtraction() {
    cout << "Enter the numbers you want to subtract:";
    int a, b;
    cin >> a >> b;
    cout << "The difference of a and b is " << a - b << endl;
}

void multiplication() {
    cout << "Enter the numbers you want to multiply:";
    int a, b;
    cin >> a >> b;
    cout << "The product of a and b is " << a * b << endl;
}

void division() {
    cout << "Enter the numbers you want to divide:";
    int a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "Error! Division by zero!" << endl;
        return;
    }
    cout << "The division of a and b is " << static_cast<float>(a) / b << endl;
}

void modulo() {
    cout << "Enter the numbers you want to find the modulus of:";
    int a, b;
    cin >> a >> b;
    cout << "The modulus of a and b is " << a % b << endl;
}

void factorial() {
    int n, fact = 1;
    cout << "Enter the number you want the factorial of: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
}

void power() {
    float b, p;
    cout << "Enter the base and the power: ";
    cin >> b >> p;
    float e = pow(b, p);
    cout << "The power is " << e << endl;
}

void square() {
    float b;
    cout << "Enter the number you want the square of: ";
    cin >> b;
    float p = pow(b, 2);
    cout << "The square of " << b << " is " << p << endl;
}

void cube() {
    float b;
    cout << "Enter the number you want the cube of: ";
    cin >> b;
    float p = pow(b, 3);
    cout << "The cube of " << b << " is " << p << endl;
}

void squareroot() {
    double b;
    cout << "Enter the number you want the square root of : ";
    cin >> b;
    double s = sqrt(b);
    cout << "The square root of " << b << " is " << s << endl;
}

void exponential() {
    float e = 2.71, x, ans;
    cout << "Enter the power e needs to be raised to: ";
    cin >> x;
    ans = pow(e, x);
    cout << "The answer is " << ans << endl;
}

void sine() {
    float ans, x, d;
    cout << "Enter the angle in degrees: ";
    cin >> x;
    d = (x * 3.14) / 180;
    ans = sin(d);
    cout << "The value of sin(" << x << ") is " << ans << endl;
}

void cosine() {
    float ans, x, d;
    cout << "Enter the angle in degrees: ";
    cin >> x;
    d = (x * 3.14) / 180;
    ans = cos(d);
    cout << " The value of cos(" << x << ") is " << ans;
}

void tangent() {
    float ans, x, d;
    cout << "Enter the angle in degrees: ";
    cin >> x;
    d = (x * 3.14) / 180;
    ans = tan(d);
    cout << " The value of tan(" << x << ") is " << ans;
}

void combination() {
    int n, r, ans;
    cout << "Enter the value of n and r in nCr: ";
    cin >> n >> r;
    ans = fact(n) / (fact(r) * fact(n - r));
    cout << "The value of nCr is " << ans;
}

void permutation() {
    int n, r, ans;
    cout << "Enter the value of n and r in nPr: ";
    cin >> n >> r;
    ans = fact(n) / fact(n - r);
    cout << "The value of nPr is " << ans;
}

void matrixadd() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n)), b(m, vector<int>(n)), c(m, vector<int>(n));
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    cout << "The sum of matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixmul() {
    int n1, n2, n3;
    cout << "Enter the values of n1, n2 & n3: ";
    cin >> n1 >> n2 >> n3;
    vector<vector<int>> n1(n1, vector<int>(n2)), m2(n2, vector<int>(n3)), ans(n1, vector<int>(n3, 0));
    cout << "Enter the values of first matrix:\n";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "Enter the values of second matrix:\n";
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n3; j++) {
            cin >> m2[i][j];
        }
    }
    cout << "The product of matrices is:\n";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n3; j++) {
            for (int k = 0; k < n2; k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void inttobin() {
    int n, rem, binary = 0, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * i;
        n = n / 2;
        i = i * 10;
    }
    cout << "The number in binary is " << binary;
}

void bintodec() {
    int n, rem, i = 0, decimal = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * (pow(2, i));
        i++;
        n = n / 10;
    }
    cout << "The decimal number is " << decimal;
}

void inttooct() {
    int n, rem, octal = 0, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        rem = n % 8;
        octal = octal + rem * i;
        n = n / 8;
        i = i * 10;
    }
    cout << "The number in octal is " << octal;
}

void octtodec() {
    int n, rem, i = 0, decimal = 0;
    cout << "Enter an octal number: ";
    cin >> n;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * (pow(8, i));
        i++;
        n = n / 10;
    }
    cout << "The decimal number is " << decimal;
}