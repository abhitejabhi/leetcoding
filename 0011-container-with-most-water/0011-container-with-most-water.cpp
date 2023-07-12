class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int width=j-i;
            int heigh=min(height[i],height[j]);
            int temp=width*heigh;
            water=max(water,temp);
            if(height[i]<height[j])
            {
                i++;
            }else
            {
                j--;
            }
        }
        return water;
    }
};