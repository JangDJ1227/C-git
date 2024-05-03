#include<stdio.h>

int main(void){
	int x=10;
    int*ptr=&x;
    int**pptr=&ptr;
    int***ppptr=&pptr;

    printf("%d %d %d %d\n",x,*ptr,**pptr,***ppptr);

    char s[]="abcd";
    char*ps="abcd";

    printf("[%p]=%s, [%p]=%s\n",s,s,ps,ps);

    char p[][10]={"tiger","lion","zebra","giraffe","dragon"};
    char*ptrc[]={"tiger","lion","zebra","giraffe","dragon"};

    for(int i=0;i<5;i++){
        printf("%s%c",ptrc[i],i!=4?' ':'\n');
    }


    return 0;
}
