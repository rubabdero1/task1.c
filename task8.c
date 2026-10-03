#include <stdio.h>
int main() {
    int arr[9];
    int size = 8;
    int smallest,largest,search,found = -1;
    int i;
    int index,new_number;

    printf("Enter 8 elements:\n");
    
    for(i  = 0;i <8;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array:");

    for (i = 0;i<8;i++)
{
    printf("%d", arr[i]);
}
    smallest = arr[0];
    largest=arr[0];
 for(i = 0;i<8;i++)
 {
    if(arr[i]>largest)
    largest = arr[i];

    if(arr[i]<smallest)
    smallest=arr[i];
 }
 printf("Largest = %d",largest);
 printf("Smallest = %d",smallest);
 
 printf("Enter numebr to search :");
 scanf("%d", &search);

 for(int i =0;i<8;i++)
 {
    if(arr[i]== search)
    {
        found = i;
        break;
    }
}
    if(found != -1) {
        printf("Found at index %d", found);

    }
    else
    {
        printf("Not found.\n");
 }
 printf("Enter number to insert:");
 scanf("%d",&new_number);

 printf("Enter index for insertion:");
 scanf("%d", &index);

if(index >= 0 && index <= size )
{
    for(i = size;i>=index;i--) {
    arr[i+1]=arr[i];
}
arr[index]= new_number;
size++;

printf("Array after insertion:");

for(i = 0;i<size;i++)
{
    printf("%d",arr[i]);

}
}
else {
    printf("Invalid index");
}

printf("Enter index to delete:");
scanf("%d",&index);

if(index >=0 && index < size)
{
    for(i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }

    size--;
     
    printf("Final Array:");
    for(i=0; i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
else {
    printf("Invalid index");
 }
 return 0;

}

