//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    while(~scanf("%d",&n))
//        switch(n)
//        {
//            case 200:
//                printf("OK\n");
//                break;
//            case 202:
//                printf("Accepted\n");
//                break;
//            case 400:
//                printf("Bad Request\n");
//                break;
//            case 403:
//                printf("Forbidden\n");
//                break;
//            case 404:
//                printf("Not Found\n");
//                break;
//            case 500:
//                printf("Internal Server Error\n");
//                break;
//            case 502:
//                printf("Bad Gateway\n");
//                break;
//        }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=1;i<=n;i++)
//        {
//            for(j=1;j<=i;j++)
//                printf("%d ",j);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdio.h>
//int cmp(const void* a,const void*b)
//{
//    return *(int*)a-*(int*)b;
//}
//int main()
//{
//    int arr[7],i;
//    while(~scanf("%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6]));
//    {
//        qsort(arr,7,sizeof(int),cmp);
//        printf("%.2f",(arr[1]+arr[2]+arr[3]+arr[4]+arr[5])/5.0);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,m;
//    scanf("%d",&n);
//    int arr[n+1];
//    for(i=0;i<n;i++)
//        scanf("%d",&arr[i+1]);
//    scanf("%d",&m);
//    for(i=0;i<n;i++)
//        if(m<arr[i+1])
//        {
//            arr[i]=m;
//            break;
//        }
//        else
//        {
//             arr[i]=arr[i+1];
//             arr[i+1]=m;
//        }
//    for(i=0;i<n+1;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//#include<stdio.h>
//void fun(int *p,int n)
//{
//    int i;
//    if(n==1)
//        return;
//    for(i=0;i<n-1;i++)
//        if(p[i+1]%p[0]==0)
//            p[i+1]=0;
//    for(i=0;i<n-1;i++)
//        if(p[i+1]!=0)
//        {
//            fun(p+i+1,n-i-1);
//            break;
//        }
//}
//int main()
//{
//    int n,i,j,count=0;
//    while(~scanf("%d",&n))
//    {
//        int arr[n-1];
//        for(i=2,j=0;i<=n;i++,j++)
//            arr[j]=i;
//        fun(arr,n-1);
//
//        for(i=0;i<n-1;i++)
//            if(arr[i]!=0)
//                printf("%d ",arr[i]);
//            else
//                count++;
//        printf("\n%d",count);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m,n,i,j,count=0;
//    scanf("%d%d",&m,&n);
//    int arr1[m][n];
//    int arr2[m][n];
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//            scanf("%d",&arr1[i][j]);
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//            scanf("%d",&arr2[i][j]);
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//            if(arr1[i][j]==arr2[i][j])
//                count++;
//    printf("%.2f",(float)count/(m*n)*100);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[6],arr2[6];
//    while(~scanf("%s %s",arr1,arr2))
//    {
//        if(!strcmp(arr1,arr2)&&!strcmp(arr1,"admin"))
//            printf("Login Success!\n");
//        else
//            printf("Login Fail!\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a=3,b=2,c=1;
//    printf("%d",3<4>0);
//}
