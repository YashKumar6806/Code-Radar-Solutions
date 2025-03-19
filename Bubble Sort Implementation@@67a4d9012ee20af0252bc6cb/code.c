// Your code here...


int bubbleSort(int a[100],int b){
    int max =a[0];
    for(int i=0;i<b;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}



