2: #include<stdio.h>
3:  int main()
      {
5:     int i, sum = 0; 
6:     int n;
7:     printf("Enter the number: ");
8:     scanf("%d",&n);
9: 
10:     for(i = 0; i <=n; i++){
11:         sum = sum + i;
12:     }
13: 
14:     printf("The sum of first %d natural number is %d\n\n", n,sum);
15:     return 0;
16: }
