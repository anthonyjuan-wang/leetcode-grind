#include <limits.h>

int maxProfit(int* prices, int pricesSize){
    int maxProf= 0;
    int min = INT_MAX;
    for (int i = 0; i < pricesSize; i++){
     // Find the maximum difference between 2 numbers,  
        
        // Price smaller than current min
        if (prices[i] < min){
            min = prices[i];
        }
        
        // Potential profit larger than 
        else if (prices[i] - min > maxProf ){
            maxProf = prices[i] - min;
            }
    }
    return maxProf;

}
