#include <stdio.h>

int main() {
    int a[10],n;
    printf("enter no");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);    
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void mergesort(int a[],int l,int h){
    if(l<h){
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
    }
}

void merge(int a[],int l,int mid,int h){
    int k=l,j=mid+1,c[10],i=l;
    while(i<=mid && j<=h){
        if(a[i]>a[j])
            c[k++]=a[j++];
        else
            c[k++]=a[i++];
    }
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=h)
        c[k++]=a[j++] ;
    for(i=l;i<k;i++)
        a[i]=c[i];
}
