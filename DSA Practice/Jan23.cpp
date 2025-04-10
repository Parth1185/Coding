// #include<iostream>
// using namespace std;

// void print(int i, int j){
//     if(i>4) return;
//     if(j>4){
//         print(i+1,0);
//         return;
//     }
//     cout<<i<<" , "<<j<<endl;
//     print(i+1,j+1);
// }
// int main()
// {
//     int arr[5][5];
//     print(0,0);
// }


//rat in a maze question
// #include<iostream>
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


    // while(!path_print(arr , i,j+1, r, c)) {
    //     i++;
    // }
    
    // if(i<n) return true;
    // return false;
// }

// int main(){
//     int r,c;
//     cin>>r>>c;
//     int i,j;
//     cin>>i>>j;
//     int maze[i][j];
//     path_print(maze,i,j,r,c);
//     return 0;    
// }

#include <iostream>
using namespace std;

bool path_print(int maze[100][100], int i, int j, int r, int c) {
    // Base case: if we've reached the bottom-right corner
    if (i == r - 1 && j == c - 1) {
        maze[i][j] = 1;
        return true;
    }

    // Out-of-bounds or invalid cell
    if (i >= r || j >= c || maze[i][j] == -1) {
        return false;
    }

    // Mark the current cell as part of the path
    maze[i][j] = 1;

    // Move right
    if (path_print(maze, i, j + 1, r, c)) {
        return true;
    }

    // Move down
    if (path_print(maze, i + 1, j, r, c)) {
        return true;
    }

    // Backtrack: unmark the current cell
    maze[i][j] = 0;
    return false;
}

int main() {
    int r, c;
    cin >> r >> c;

    int maze[100][100];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> maze[i][j];  // Input the maze (0 for open cell, -1 for blocked cell)
        }
    }

    if (path_print(maze, 0, 0, r, c)) {
        cout << "Path found:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found" << endl;
    }

    return 0;
}
