public:


int orangesrotting(vector<int<int>> &grid)
{

    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int , int>> q;

    int fresh_count == 0;

    for(int r = 0; r < rows ; r++)
    {
        for(int c = 0; c < cols ;c++)
        {
            if(grid[r][c] == 2)
            {
                q.push({r,c});
            }
            else if(grid[r][c] == 1)
            {
                fresh_count++;
            }
        }
    }

    if(fresh_count ==0 )
    {
        return 0; // no time needed

    }

     vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

     int time_counted ==0 ;

     while(!q.empty())
     {

        int currentlevelsize = q.size();
        bool rotted = false;

        for(int i =0 ; i< currentlevelsize ; i++)
        {
            auto [r,c] = q.front();
            q.pop();

            for(auto [dr,dc] : directions)
            {
                int new_row = r+dr;
                int new_col = c+dc;

                if(new_row >=0 && new_row < rows && new_col >=0 && new_col <cols && grid[new_row][new_col] == 1)
                {
                    grid[new_row][new_col] == 2;
                    q.push({new_row , new_col});
                    fresh_count --;
                    rotted = true;
                }
            }
        


     }




     if(rotted)
     {
        time_counted++;

     }


}

return fresh_count >0 ? -1: time_counted;



//OR




class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            
            int rows = grid.size();
            int cols = grid[0].size();
            vector<pair<int,int>> paircount;
    
            int fresh_count = 0;
            for (int r = 0 ;r < rows ; r++)
            {
                for(int c=0 ; c<cols;c++)
                {
                    if(grid[r][c] == 2)
                    {
                        paircount.push_back({r,c});
                    }
    
                    else if(grid[r][c] == 1)
                    {
                        fresh_count++;
                    }
                }
            }
    
            if(fresh_count == 0)
            {
                return 0; // else no fresh is there
            }
    
            vector<pair<int,int>> directions = {{-1,0} , {1,0} , {0,-1} , {0,1}};
    
            int time_count =0;
    
            while(!paircount.empty())
            {
                vector<pair<int,int>> newrotten;
                bool rotted = false;

            
    
    
                for(int i =0 ; i<currentsize ; i++)
                {
                    for(auto[r,c] : paircount){
                        for(auto[dr,dc] : directions)
                        {
                            int new_row = r + dr;
                            int new_col = c + dc;
                            if(new_row >=0 && new_row < rows && new_col >=0 && new_col < cols && grid[new_row][new_col] == 1)
                            {
                                grid[new_row][new_col] = 2;
                                new_rotten.push_back({new_row,new_col});
                                fresh_count --;
                                rotted = true;
                            }
                        }
                    }
    
                    if(rotted) 
                    {
                        time_count++;
                        paircount = new_rotten;
                    }
                }
            }
    
            if(fresh_count > 0)
            {
                return fresh_count;
            }
    
            else{
                return -1;
            }
    
        }
    };






class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<pair<int,int>> rotten;
        int fresh_count = 0;

        for(int r = 0; r<rows ; r++)
        {
            for(int c = 0 ; c<cols ; c++)
            {
                if(grid[r][c] == 2)
                {
                    rotten.push_back({r,c});
                }
                else if(grid[r][c] == 1)
                {
                    fresh_count++;
                }
            }
        }

        if(fresh_count == 0)
        {
            return 0;

        }

        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        int time_count = 0 ;
        



    }
}
