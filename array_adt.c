#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
}marks;

void createarray(struct myarray* a, int tsize, int usize){
    // (*a).total_size = tsize;
    // (*a).used_space = usize;
    // (*a).ptr = (int *)malloc(tsize*sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));

}

void show(struct myarray *a){
    int i =0;
    for(i=0;i< a->used_size ;i++){
        printf("%d\n",(a->ptr)[i]);
    }
}
void setval(struct myarray *a){
    int i =0,n;
    for(i=0;i< a->used_size ;i++){
        printf("enter element %d ",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}

int main(){
    struct myarray;
    createarray(&marks,10,2);
    setval(&marks);
    show(&marks);
    
    return 0;
}