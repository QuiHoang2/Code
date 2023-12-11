#include <fstream>
#include <cctype>
#define K 3

char process(char c, int k);
void decode(const char path[], const char result[], int k);
void encode(const char path[], const char result[], int k);

int main(void) {
    decode("code.txt", "decode.txt", K);
    encode("code.txt", "encode.txt", K);
    return 0;
}

char process(char c, int k) {
    if (!isalpha(c)) return c;
    k = k % 26;
    int lower {std::islower(c)};
    c = std::toupper(c);
    c += k;
    if (c < 'A') c += 26;
    if (c > 'Z') c -= 26;
    if (lower) c = std::tolower(c);  
    return c;      
}

void decode(const char path[], const char result[], int k) {
    k = -k;
    std::fstream input;
    std::fstream output;
    char c {}, o{};
    
    output.open(result, std::ios::out);
    input.open(path, std::ios::in);
    for (char c = input.get(); !input.eof(); c = input.get()) {
        output.put(process(c, k));
    }
    input.close();
    output.close();
}

void encode(const char path[], const char result[], int k) {
    std::fstream input;
    std::fstream output;
    char c {}, o{};
    
    output.open(result, std::ios::out);
    input.open(path, std::ios::in);
    for (char c = input.get(); !input.eof(); c = input.get()) {
        output.put(process(c, k));
    }
    input.close();
    output.close();
}