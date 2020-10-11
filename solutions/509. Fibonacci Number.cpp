class Solution {
public:
    int fib(int N) {
        int arr[50];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<35;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[N];
        
    }
};
