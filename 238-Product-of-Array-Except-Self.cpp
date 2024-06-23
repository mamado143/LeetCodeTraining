class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      std::vector<int> answer(n, 1);  

      // Step 1: Calculate prefix products

      int perfix_product = 1;
      int suffix_product = 1;

      for (int i = 0; i < n; ++i) {
        answer [i] = perfix_product;
        perfix_product *= nums [i];
      }
      // Step 2: Calculate suffix products and update answer array.
      for (int i = n - 1; i >= 0; --i) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
      }
      return answer;
    }
};