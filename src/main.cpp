#include<iostream>
#include <functional>
using namespace std;
// const std::function<std::string(const char*)> G_TRANSLATION_FUN = nullptr;

int main() {
       if (__cplusplus == 201703L) std::cout << "C++17\n";

    else if (__cplusplus == 201402L) std::cout << "C++14\n";

    else if (__cplusplus == 201103L) std::cout << "C++11\n";

    else if (__cplusplus == 199711L) std::cout << "C++98\n";

    else std::cout << "pre-standard C++\n";
       cout << "hello dd dd xx" << endl;
	return 0;
}
