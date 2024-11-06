#include <iostream>
using namespace std;

#include <string>

string str_replace(const string& search, const string& replace, string line) {
    size_t pos = 0;

    if (search.empty()) {
        return line; // sem mudança se `search` é vazio
    }

    while ((pos = line.find(search, pos)) != string::npos) {
        line.replace(pos, search.length(), replace);
        pos += replace.length(); // move para o próximo caractere após a substituição
    }

    return line;
}

int main() {
    string line = "# teste";
    // Remove comentário de uma linha 
    cout << str_replace("# ", "", line) << endl;

    return 0;
}
