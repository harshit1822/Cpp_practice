void sort012(int *arr, int n)
{
    //Write your code here
    int a= 0;
    int NumZero=0, NumOne=0, NumTwo=0;
    while(a<n){
        
        if(arr[a]==0){
            NumZero++;
        }
        else if(arr[a]==1){
            NumOne++;
        }
        else{
            NumTwo++;
        }
        a++;
    }
    int i=0;
    int count=0;
    while(count==0){
        
        if(NumZero>0){
            arr[i]=0;
            i++;
            NumZero--;
        }
        else if(NumOne>0){
            arr[i]=1;
            i++;
            NumOne--;
        }
        else if(NumTwo>0){
            arr[i]=2;
            i++;
            NumTwo--;
        }
        
        if(i==n){
            count=1;
        }
    }
    
   

}