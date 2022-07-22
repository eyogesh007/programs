#include <stdio.h>

int main() {
    int a[10],n;
    printf("enter no");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);    
    heapsort(a,n);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void heapsort(int a[],int n){
    int temp;
    for(int i=n/2-1;i>=0;i--){
        heapif(a,i,n);
    }
    for(int i=n-1;i>0;i--)
    {
        temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapif(a,0,i);
    }
}

void heapif(int a[],int i,int j){
    int l=i*2+1;
    int r=i*2+2;
    int largest=i;
    int temp;
    if(l<j && a[l]>a[largest]){
        largest=l;
    }
    if(r<j && a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapif(a,largest,j);
    }
}
