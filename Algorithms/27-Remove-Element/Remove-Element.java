import java.util.Arrays;

class Solution {
    public int removeElement(int[] nums, int val) {
        int counter = 0;
        for (int i = 0; i< nums.length; i++){
            if (nums[i] == val){
                counter++;
                nums[i] = 101; //placeholder value
            }
        }
        Arrays.sort(nums);
        return nums.length - counter;
    }
}