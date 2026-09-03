class Solution {
public:
void dfs(int r, int c ,  vector<vector<int>>& image, int oldColor, int newColor){
    int n=image.size();
    int m=image[0].size();
    image[r][c]=newColor;
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==oldColor){
            dfs(nr,nc,image,oldColor,newColor);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor=image[sr][sc];
        if(oldColor==color)
        return image;
        dfs(sr,sc,image,oldColor,color);
        return image;
    }
};