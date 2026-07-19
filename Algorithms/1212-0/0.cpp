#include <vector>

class Solution {
public:
    std::vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;
        
        std::vector<int> temp = {12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789};
        
        int increment = 11;
        int consecutive = 8;
        
        for (int i = 0; i < temp.size(); i++) {
            int current = temp[i];
            
            for (int j = 0; j < consecutive; j++) {
                if (current >= low && current <= high) {
                    result.push_back(current);
                }
                else if (current > high) {
                    return result; 
                }
                
                current += increment;
            }
            
            consecutive--;
            increment = increment * 10 + 1;
        }
        return result;
    }
};
