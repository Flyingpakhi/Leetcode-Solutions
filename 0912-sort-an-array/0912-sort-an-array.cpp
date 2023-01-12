class Solution {
public:
void insert(vector<int>&nums) {
  int i=1;
  while(i<nums.size()){
    int childIndex = i;
    while (childIndex > 0) {
      int parentIndex = (childIndex - 1) / 2;
      if (nums[childIndex] > nums[parentIndex]) {
        int temp = nums[childIndex];
        nums[childIndex] = nums[parentIndex];
        nums[parentIndex] = temp;
      } else {
        break;
      }
      childIndex = parentIndex;
    }
    i++;
  }
}
void removeMax(vector<int>&nums) {
  if (nums.size()==0) {
    return ;
  }
int n=nums.size();
  while(n!=0){
  int ans = nums[0];
  nums[0] = nums[n- 1];
  nums[n-1]=ans;
  n--;
  int parIndex = 0;
  int leftChild = 2 * parIndex + 1;
  int rightChild = 2 * parIndex + 2;
  while (leftChild <n) {
    int maxIndex = parIndex;
    if (nums[maxIndex] < nums[leftChild]) {
      maxIndex = leftChild;
    }
    if (rightChild <n && nums[rightChild] >nums[maxIndex]) {
      maxIndex = rightChild;
    }
    if (maxIndex == parIndex) {
      break;
    }
    int temp = nums[maxIndex];
    nums[maxIndex] = nums[parIndex];
    nums[parIndex] = temp;
    parIndex = maxIndex;
    leftChild = 2 * parIndex + 1;
    rightChild = 2 * parIndex + 2;
  }
  }
}
    vector<int> sortArray(vector<int>& nums) {
        insert(nums);
        removeMax(nums);
        return nums;
    }
};