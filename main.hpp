//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
       srand(time(0)); 
       return rand() % 100; 
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0; 
                int closestNum = rdnum1; 
                double minDiff = abs(mean - rdnum1); 

        double diff = abs(mean - rdnum2); 
        if (diff < minDiff) {
                closestNum = rdnum2; 
                minDiff = diff; 
        }

        diff = abs(mean - rdnum3); 
        if (diff < minDiff) {
                closestNum = rdnum3; 
                minDiff = diff; 
        }

        return closestNum; 
        
}