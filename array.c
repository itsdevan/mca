#include<stdio.h>
int a[10],n=0,i,pos;

void insert(){
    printf("Enter the position to be inserted: ");
    scanf("%d",&pos);

    if(pos<1 || pos>n+1){
        printf("Invalid condition");
    }

    else{
        for(i=n;i>pos-1;i--){
            a[i]=a[i-1];
        }

        printf("Enter your element: ");
        scanf("%d",&a[pos-1]);
        n++;
        printf("Element insertion successful\n");

    }
    
}

void delete(){
    printf("Enter the position to be deleted: ");
    scanf("%d",&pos);
    printf("Element %d deleted sucessful\n",a[pos-1]);



    if(pos<0 || pos>n){
        printf("Invalid condition");
    }
    else{
        for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
        n--;

    }
}
}

void search(){
    int s;
    printf("Enter the element to be search: ");
    scanf("%d",&s);

    for(i=0;i<n;i++){
        int f=0;
        if(a[i]==s){
            printf("Item found at position %d\n",i+1);
            f=1;
        }

        if(f=0){
            printf("Element does not exit\n");
        }
    }
}

void display(){
    printf("The Elements are\n");
    for(i=0;i<n;i++){
       printf("%d\n",a[i]);
    }
}
int main(){
int ch;
    while(1){
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Search\n");
    printf("4. Display\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch){

      case 1:
    insert(); 
    break;

      case 2:
    delete();
    break;

     case 3:
     search();
     break;
     
     case 4:
     display();
     break;

     case 5:
     return 0;
     break;

     
    }
    }
}