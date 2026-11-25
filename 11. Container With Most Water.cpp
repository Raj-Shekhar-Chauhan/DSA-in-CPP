class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0,en=height.size()-1;
        int maxWater = 0;
        while(st<en){
            int ht=min(height[st],height[en]);
            int wd = en - st;
            maxWater = max(maxWater,ht*wd);
            (height[st]<height[en])? st++ : en--;
        }
        return maxWater;
    }
};