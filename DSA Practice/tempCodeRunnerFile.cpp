#include<iostream>
// using namespace std;

// bool path_print(int arr[i][j], int i, int j, int r, int c){
//     if(i==r-1 && j==c-1) return true;
//     if(j==c || i==n) return false;
//     maze[i][j] = 1;

//     if(!path_print(i,j+1,r,c) && (!path_print(i+1,j,r,c))){
//         maze[i][j] =0;
//         return false;
//     }
//     return true;