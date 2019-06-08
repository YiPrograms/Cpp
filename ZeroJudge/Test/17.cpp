#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
    string s;
    while (getline(cin, s)) {
      ofstream fout("temp.cpp");
        fout << "#include <iostream>\n";
        fout << "int main()\n";
        fout << "{\n";
        fout << "   std::cout << (" << s << ") << std::endl;\n";
        fout << "   return 0;\n";
        fout << "}\n";
        fout.close();
        system("g++ temp.cpp -o temp.exe");
        system("temp");
    }
}
