#include <fstream>

int main(void) {
    int matrix[100][100] {};
    int m {}, n {}, sum {};
    std::fstream stream;

    stream.open("matrix.txt", std::ios::in);
    stream >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            stream >> matrix[i][j];
            sum += matrix[i][j];
        }
    }
    stream.close();

    stream.open("result.txt", std::ios::out);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == (sum / 2))
                stream << matrix[i][j];
        }
    }
    stream.close();
    
    return 0;
}