// Your code here...
void isPrime(int num){

    if(num == 0) printf("1");
    else if(num == 1) printf("0");
    for(int i=0;i<num;i++){
        if(num%i==0){
            printf("1");
        }
        else printf("0");
    }
}