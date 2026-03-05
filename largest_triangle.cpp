class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& point) {
        double maxArea=0.0;
        int n=size(point);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int x1=point[i][0],y1=point[i][1];
                    int x2=point[j][0],y2=point[j][1];
                    int x3=point[k][0],y3=point[k][1];

                    double tempArea=abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));

                    maxArea=max(maxArea,0.5*tempArea);
                }
            }
        }
        return maxArea;
    }
};