#include <iostream>

using namespace std;

int main()

{

    int iCanCount [] = {1, 2, 3, 4, 5};
    
    int i = 0;
    
    size_t lengthOfA = sizeof(iCanCount)/sizeof(iCanCount[0]) ;
    
    for (i < lengthOfA; i++;) {
        
        i = i + 1;
        
        cout << iCanCount[i];
        
    }
    
    cout << i;
    
    cout << "\n";
    
    cout << "PROGRAM DONE!";

    return 0;

}
