class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int> a,b;
    double median;
    
    void insertHeap(int &x) {
       a.push(x);
       balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int temp = a.top();
        a.pop();
       
        b.push(-1*temp);
       
        if(b.size() > a.size()) 
        {
           temp = b.top();
           b.pop();
           a.push(-1*temp);
        }
       
    }
    
    //Function to return Median.
    double getMedian() 
    {
        if(a.size() != b.size())
            median = (double)a.top();
        
        else
            median = (double)((a.top() * 1.0 - b.top() * 1.0)/2);
        
        return median;
    }
};
