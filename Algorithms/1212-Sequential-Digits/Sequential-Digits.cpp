class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        vector<int> temp = {12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789};
        int eleven = 11;
        int current;
        int consecutive = 8;
        for (int i = 0; i < temp.size(); i++){
            current = temp[i];
            for (int j = 0; j < consecutive; j++){
                if (current >= low && current<=high){
                    result.push_back(current);
                }   
                else if(current>=high){
                    return result;
                }
                current += eleven;         
            }
            consecutive--;
            eleven*=10;
            eleven++;
        }
        return result;
    }
};