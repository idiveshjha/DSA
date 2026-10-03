class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 0) return;

        //{1,2,3}, k =3 -> {3,1,2} -> {2,3,1} -> {1,2,3} (if k = n; nums remain same)
        //k =4 -> {3,1,2} 
        k = k%n; //normalising in case k>=n

        auto reverse = [&](int i, int j){
            while(i <j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        };

        reverse(0, n-1);
        reverse(0, k-1);
        reverse(k, n-1);
    }
};