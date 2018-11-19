#include <iostream>

using namespace std;

int iCanCount[] = {1, 2, 3, 4, 5};

int main()

{
    
    int lengthOfArray = sizeof(iCanCount) / sizeof(int);
    
    int i = 0;
    
    std::cout << "There are " << lengthOfArray << " total slots!" << std::endl;
    
    for (i = 0; i < lengthOfArray; i++)
    
    {
        
        int totalSlotsLeft = lengthOfArray - i;
        
        std::cout << "The value of slot: " << i << " is, " << iCanCount[i] << std::endl;
        
        std::cout << "There are " << totalSlotsLeft - 1 << " slots Left" << std:: endl;
        
    }
   
    cout << "Program Done Running.";
   
    return 0;

}
