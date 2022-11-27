class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int k = 1;
        int prev = a[0];
        for(int i = 1; i<n;i++)
        {
            if(prev == a[i]){
                continue;
            }
            else
            {
                prev = a[i];
                a[k++] = prev;
            }
        }
        return k;
    }
};