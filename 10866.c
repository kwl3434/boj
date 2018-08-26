#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct deque{
    int num;
    struct deque* next;
    struct deque* parent;
}deq;
deq* front=NULL;
deq* back=NULL;
int main(){
    int N,X,size=0;
    deq* a;
    deq* del;
    char sym[11];
    scanf("%d",&N);
    while(N--){
        scanf("%s",sym);
        if(!strcmp(sym,"push_front")){
            scanf("%d",&X);
            a=(deq*)malloc(sizeof(deq));
            a->num=X;
            a->parent=NULL;a->next=NULL;
            if(front!=NULL){
                front->parent=a;
                a->next=front;
                front=a;
            }else{
                front=a;
                back=a;
            }
            size++;
        }else if(!strcmp(sym,"push_back")){
            scanf("%d",&X);
            a=(deq*)malloc(sizeof(deq));
            a->num=X;
            a->parent=NULL;a->next=NULL;
            if(back!=NULL){
                back->next=a;
                a->parent=back;
                back=a;
            }else{
                front=a;
                back=a;
            }
            size++;
        }else if(!strcmp(sym,"pop_front")){
            if(front!=NULL){
                printf("%d\n",front->num);
                del=front;
                if(front->next!=NULL){
                    front=front->next;
                    front->parent=NULL;
                    free(del);
                    del=NULL;
                }else{
                    free(front);
                    front=NULL;back=NULL;
                }
                size--;
            }else printf("-1\n");
        }else if(!strcmp(sym,"pop_back")){
            if(back!=NULL){
                printf("%d\n",back->num);
                del=back;
                if(back->parent!=NULL){
                    back=back->parent;
                    back->next=NULL;
                    free(del);
                    del=NULL;
                }else{
                    free(back);
                    back=NULL;front=NULL;
                }
                size--;
            }else printf("-1\n");
        }else if(!strcmp(sym,"size")){
            printf("%d\n",size);
        }else if(!strcmp(sym,"empty")){
            if(size==0)printf("1\n");
            else printf("0\n");
        }else if(!strcmp(sym,"front")){
            if(size!=0)printf("%d\n",front->num);
            else printf("-1\n");
        }else if(!strcmp(sym,"back")){
            if(size!=0)printf("%d\n",back->num);
            else printf("-1\n");
        }
    }
    return 0;
}