void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int i = 0;
    int k = 0;
    while(i<size){
       // if(input[i]==0){
           // i++;
           // continue;
       // }
       // else{
        if(input[i]!=0){
            input[k]=input[i];
            
            k++;
        }
        i++;
       // }
        
    }
    while(k<size){
        input[k]=0;
        k++;
    }
}