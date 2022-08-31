int findSecondLargest(int *input, int n)
{
    //Write your code here
    int L=input[0];
    int SL= -2147483648;
    if(n<=1){
      return   -2147483648;
    }
    else{
    for(int i=1; i<n; i++){
        
        if(input[i]>L){
            SL=L;
            L=input[i];
        }
        else if(input[i]>SL && input[i] != L){
            SL = input[i];
        }
    }
        if(L==SL){
            return -2147483648;
        }
        else{
          return SL;
        }
    }
}