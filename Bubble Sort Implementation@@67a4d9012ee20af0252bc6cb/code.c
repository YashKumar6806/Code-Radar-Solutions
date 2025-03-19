// Your code here...

int bubbleSort(int arr[],int n){
    int max = arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;

}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}
