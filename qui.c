#include <stdio.h>

int main() {
    int a[10],n;
    printf("enter no");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);    
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void quicksort(int a[],int l,int h){
    if(l<h){
        int p=part(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}

int part(int a[],int l,int h){
    int p=l,temp,i=l,j=h;
    while(i<=j){
    while(i<=h&& a[p]>=a[i])
            i++;
    while(j>=l && a[p]<a[j])
            j--;
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    } 
    else{
        temp=a[j];
        a[j]=a[p];
        a[p]=temp;        
    }
}
return j;
}
