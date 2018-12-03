#include <iostream>

using namespace std;

int main()

{

    std::cout << "It's been " << ((time(NULL) / 31449600) - 1) << " years, since 1970!\n";

    return 0;
    
}
