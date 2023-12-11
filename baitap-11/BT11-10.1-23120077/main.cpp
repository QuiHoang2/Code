#include <fstream>

bool isPrime(int n);
void swap(int &a, int &b);

int main(void) {
    int m {}, n {};
    std::fstream stream;

    stream.open("input.txt", std::ios::in);
    stream >> m >> n;
    stream.close();

    swap(m, n);

    stream.open("output.txt", std::ios::out);
    for (int i = m; i <= n; ++i) {
        if (isPrime(i))
            stream << i << ' ';
    }
    stream.close();

    return 0;
}

bool isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void swap(int &a, int &b) {
    if (a > b) {
        int temp {};
        temp = a;
        a = b;
        b = temp;
    }
}