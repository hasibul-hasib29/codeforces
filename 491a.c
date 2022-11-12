#include<stdio.h>
int main(){
    int t,n,a[1000],c,z,m,flag;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        c=0;
        flag=0;
        z=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]==0)
            z++;
        }
        if(z>0){
            printf("%d\n",n-z);
        }
        else{
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]==a[k]){
                    m=j;
                    flag=1;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1){
            printf("%d\n",n);
        }
        else{
        while(a[0]!=0||a[1]!=0){
            if(a[0]==a[1])
            {
                a[0]=0;
            }
            else
            {
                if(a[0]<a[1])
                {
                    a[1]=a[0];
                }
                else
                a[0]=a[1];
            }
            c++;
        }
        printf("%d\n",c+n-2-z);
    }
    }
    }
    return 0;
}