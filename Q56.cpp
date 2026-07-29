// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return{};
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b){
            return a[0] < b[0];
        });
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        for(int i = 0;i<intervals.size(); ++i){
            auto& prev=merged.back();
            const auto& curr = intervals[i];
            if(curr[0]<=prev[1]){
                prev[1] = max(prev[1], curr[1]);
            }
            else{
                merged.push_back(curr);
            }
        }
        return merged;
    }
};