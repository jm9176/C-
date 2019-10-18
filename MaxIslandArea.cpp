#include <iostream>
#include <queue>
#include<cstring>

using namespace std;

// defining the rows and cols of the grid
# define ROWS 4
# define COLS 4

// node for grid location
struct Node{
    int x;
    int y;
    };

// defining the directions for the current grid coordinate
int row[] = {0,1,0,0,-1};
int cols[] = {0,0,1,-1,0};

// check if the grid location is valid
int locCheck(int grid[][COLS], int x, int y, bool visited[][COLS]){
    return x>=0 && x<ROWS && y>=0 && y<COLS && !visited[x][y] && grid[x][y];

}

// calculate the max value of the modified grid
int GetMaxIsland(int grid[][COLS],int i,int j){
    int maxValue = 0;
    int gridStatus = 0;
    bool visited[ROWS][COLS];
    memset(visited, false, sizeof(visited));
    visited[0][0] = true;
    queue<Node> node_queue;
    node_queue.push({i,j});
    
    if(grid[0][0] == 0){
        maxValue = 0;
    } else{
        maxValue = 1;
        }
    
    while(!node_queue.empty()){
        Node temp_node = node_queue.front();
        node_queue.pop();
        
        i = temp_node.x;
        j = temp_node.y;
        
            // locCheck the direction -> keep updating the value  
        for(int l=0; l<4; l++){
            gridStatus = locCheck(grid, i+row[l], j+cols[l], visited);
            if(gridStatus){
                visited[i+row[l]][j+cols[l]] = true;
                maxValue += 1;
                node_queue.push({i+row[l], j+cols[l]});   
                }
                
            }
    }
    return maxValue;
}

// modify the grid location by 1 at a time
int traverseGrid(int grid[][COLS]){
    
    static int maxArea = 0;
    
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            if(grid[i][j] == 0){
                grid[i][j] = 1;
                
                if(GetMaxIsland(grid, i, j) > maxArea){
                    maxArea = GetMaxIsland(grid, i, j);
                }
                grid[i][j] = 0;
            }
        }
    }
    
    return maxArea;
}

int main() {
    
    int grid[ROWS][COLS] = {{1,0,0,0},
                            {1,1,0,0},
                            {1,1,0,0},
                            {0,0,0,0}};
    
    cout<<"Max area: "<<traverseGrid(grid)<<endl;

    return 0;
}
