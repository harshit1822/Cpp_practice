void swapAlternate(int *arr, int size)
{
    //Write your code here
    
    int i;
    int n;
    int m=0;
    int j;
   
        
    
    for(i=0; i<size-1;i++){
        if(size==0||size==1){
            break;
        }
        j=i+1;
        if(j<=size){
        m = arr[i];
        arr[i]=arr[j];
        arr[j]=m;
        i++;
        }
        
    }
        
}
