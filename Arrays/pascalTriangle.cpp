//Pascal's Triangle 1
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0] = r[i][i] = 1;
            
            for(int j=1;j<i;j++)
                r[i][j] = r[i-1][j]+r[i-1][j-1];
        }
        return r;
    }


//Pascal's Triangle 2
vector<int> getRow(int rowIndex) {
        vector<int> v1, v2;
        v1={1};
        for(int i=0;i<=rowIndex;i++) {
            //v2.clear();
            v2.resize(i+1);
            v2[0] = v2[i] = 1;
            for(int j=1;j<i;j++)
                v2[j] = v1[j]+v1[j-1];
            v1.clear();
            v1=v2; 
        } 
        return v2;
    }
