bool dfs(char** b,int r,int c,int i,char* w,int R,int* C){
    if(!w[i]) return 1;
    if(r<0||c<0||r>=R||c>=C[r]||b[r][c]!=w[i]) return 0;
    char t=b[r][c]; b[r][c]='#';
    int f=dfs(b,r+1,c,i+1,w,R,C)||dfs(b,r-1,c,i+1,w,R,C)||dfs(b,r,c+1,i+1,w,R,C)||dfs(b,r,c-1,i+1,w,R,C);
    return b[r][c]=t,f;
}

bool exist(char** b,int R,int* C,char* w){
    for(int i=0;i<R;i++) for(int j=0;j<C[i];j++)
        if(dfs(b,i,j,0,w,R,C)) return 1;
    return 0;
}