class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();

        for (int i=0;i<n;i++){
            int findOtherNum=target-nums[i];

            if (mpp.find(findOtherNum)!=mpp.end()){
                return {mpp[findOtherNum],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
/*
Time Complexity: O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).

Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

Space Complexity: O(N) as we use the map data structure.
*/
