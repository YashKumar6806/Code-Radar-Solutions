// Your code here...
int isPrime(int num){
    int i;
    if(num == 0) return 1;
    else if(num == 1) return 0;
    while(num>0){
        if(num%i==0){
            printf("1");
        }
        else printf("0");
    }
}