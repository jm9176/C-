#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

// defining the rows and the columns for the grid used for findign teh path
#define ROWS 5
#define COLS 5

// Create a node stucture for storing the coordinate point and the current distance
// from the start point
struct Node{
    int x;
    int y;
    int dist;
    };
    
// to check if the selected points are valid and if they have been visited earlier or not
bool isValid(int temp_mat[][COLS], bool temp_visited[][COLS], int temp_x, int temp_y){
    return temp_x>=0 && temp_y>=0 && !temp_visited[temp_x][temp_y] && temp_mat[temp_x][temp_y] &&
                temp_x < ROWS && temp_y < COLS;
    }
    
// defining the possible movement that a point based robot can take. Currently it is considering
// the directions along all the 8 possible ways
int row[] = {0, 1, 1, 1, 0, -1, -1, -1};
int col[] = {1, 1, 0, -1, -1, -1, 0, 1};

// code setupf or the Breadth First Search, which takes defined grid, start and the goal point
int BFS_path(int temp_grid[][COLS], int start_x, int start_y, int goal_x, int goal_y){
    
    // To check if the selected point is valid or not, by comparing with the maximum size of the grid
    if(start_x >= 0 && start_y >= 0 && goal_x >= 0 && goal_y >= 0 &&
            start_x < ROWS && start_y < COLS && goal_x < ROWS && goal_y < COLS){
    
        // define a matrix which will store the point locations which has been visited or not and setting
        // the value of all the grid locations to false using the memset function
        bool visited[ROWS][COLS];
        memset(visited, false, sizeof(visited));
        
        // Initializing the queue for storing the nodes based on the traversal under the BFS criteria
        queue<Node> node_list;
    
        int dist = 0;
        visited[start_x][start_y] = true;
        node_list.push({start_x, start_y, dist});
    
        // running the loop till the queue is not empty
        while(!node_list.empty()){
            Node temp_node = node_list.front();
            node_list.pop();
        
            start_x = temp_node.x;
            start_y = temp_node.y;
            dist = temp_node.dist;
        
            if(start_x == goal_x && start_y == goal_y){
                return dist;
                }
        
            // check for all teh possible locations using the configured directions
            for(int k=0; k<8; k++){
                if(isValid(temp_grid, visited, start_x + row[k], start_y + col[k])){
                    visited[start_x + row[k]][start_y + col[k]] = true;
                    node_list.push({start_x + row[k], start_y + col[k], dist + 1});
                    }
                }
            }
        }
        
    cout<<"path not found"<<endl;
    return -1;
    
    }

int main(){
    
    // define th grid as a base to find the path between poitn A and point b 
    int mat_grid[ROWS][COLS];
    memset(mat_grid, 1, sizeof(mat_grid));
    
    cout<<"Min distance is: "<<BFS_path(mat_grid, 0, 0, 0, 0)<<endl;
    
    return 0;
    }
