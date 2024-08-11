/*
Brute Force 

#include<bits/stdc++.h>
using namespace std;

bool searchSortedMatrix( vector<vector<int>>& matrix,int num){
     int n = matrix.size(), m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==num){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int searchElement = 5;
    bool result =  searchSortedMatrix(matrix,searchElement);
    cout<<result;
    return 0;

}

Time complexity = O(N*M)
Space Complexity = O(1)

*/