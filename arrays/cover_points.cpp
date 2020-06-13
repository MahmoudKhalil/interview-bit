int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int prev_x = A[0];
    int prev_y = B[0];
    int moves = 0;
    
    for(int i = 1; i < A.size(); i++)
    {
        int x = A[i];
        int y = B[i];
        
        int d1 = 0;
        int d2 = 0;
        
        if(x > prev_x)
            d1 = x - prev_x;
        else
            d1 = prev_x - x;
            
        if(y > prev_y)
            d2 = y - prev_y;
        else
            d2 = prev_y - y;
        
        moves += max(d1, d2);
        
        prev_x = x;
        prev_y = y;
    }
    
    return moves;
}

