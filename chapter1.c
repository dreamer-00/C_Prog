/* #include<stdio.h>
int main(){
    float fahr, celsius;
    float upper, lower, step;
    lower=0;
    upper=300;
    step=20;
    fahr=upper;
    while(fahr>=lower){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%5.0f %2.1f\n", fahr, celsius);
        fahr-=step;
    }
} */
/* #include<stdio.h>
int main(){
    int c;
    c=getchar();
    long long counter=0;
    while(c!=EOF){
        putchar(c);
        c=getchar();
        counter++;
    }
    printf("%lld\n", counter);
} */
/* #include<stdio.h>
int main(){
    int c, i, nwhite, nother;
    int ndigit[10] = {0};
    nwhite=nother=0;
    for(i=0; i<10; i++){
        ndigit[i]=0;
    }
    while((c=getchar())!=EOF){
        if(c>='0' && c<='9'){
            ndigit[c-'0']++;
        }
        else if(c==' ' || c=='\n' || c=='\t'){
            nwhite++;
        }
        else{
            nother++;
        }
    }
    printf("digits =");
    for(i=0; i<10; i++){
        printf(" [%d]=%d", i, ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
} */
/* #include<stdio.h>
int power(int base, int n){
        int i, p;
        for(i=1, p=1; i<=n; i++){
            p*=base;
        }
        return p;
    }
int main(){
    int m, n;
    printf("Enter a base and a exponent: ");
    scanf("%d %d", &m, &n);
    printf("%d\n", power(m, n));
    return 0;
} */
#include<stdio.h>
int main
