// Bài tập tổng hợp 13.1
// MSSV:
// Họ tên:
#include<stdio.h>

int main() {

	/********** 13.1.01. **********/
    /*int n= 10;
    scanf("%d", &n);
    int res=1;
    for(int i= 2; i<=n; i++)res*=i;
    printf("%d\n", res);*/

	/********** 13.1.02. **********/
	/*int x=2, n=10;
    int res=1;
    for(int i=0 ; i< 10; i++)res*=x;
    printf("%d\n", res);*/

	/********** 13.1.03. **********/
	/*int n =10;
    double res = 1;
    for(int i= 2; i<= 2*n; i+=2){
        res+= (double)1/i;
    }
    printf("%lf\n", res);*/

	/********** 13.1.04. **********/
    /*int n=23;
    int f= 1;
    for(int i = 2; i*i <=n ; i++){
        if(n % i==0){
            f=0;
            break;
        }
    }
    if(f==1)printf("So %d la so nguyen to", n);else {
        printf("So %d khong la so nguyen to", n);
    }
    printf("\n");*/
	
	/********** 13.1.05. **********/
    /*int n = 10 , k= 4;
    int tu =1;
    for(int i= 1; i<=10; i++)tu*=i;
    int mau1=1, mau2=1;
    for(int i=1; i<=k; i++)mau1*=i;
    for(int i=1; i<= n-k; i++)mau2*=i;
    tu/=mau1;
    tu/=mau2;
    printf("%d\n", tu);*/

	/********** 13.1.06. **********/
    /*int f0=0 , f1=0 , f2=0, f3=0, f4=0, f5=0, f6=0, f7=0;
    int n= 20;
    int m=n;
    f0 =   n % 2; n/= 2;
    f1 =   n % 2; n/=2;
    f2 =   n % 2; n/=2;
    f3 =   n % 2; n/=2;
    f4 =   n % 2; n/=2;
    f5 =   n % 2; n/=2;
    f6 =   n % 2; n/=2;
    f7 =   n % 2; n/=2;
    printf("ma nhi phan cua %d la %d%d%d%d%d%d%d%d\n", m,f7,f6,f5,f4,f3,f2,f1,f0);*/

	
	/********** 13.1.07. **********/
	/*int mx=-999999999, mn=999999999;
    int x;
    while(scanf("%d", &x)){
        if (x ==0)break;
        if ( x> mx )mx=x;
        if ( x < mn)mn=x;
    }
    printf("so lon nhat la %d\n", mx);
    printf("so be nhat la %d\n", mn);*/

	/********** 13.1.08. **********/
    /*int x;
    int cnt_le = 0 , cnt_chan =0 , cnt_mod8=0; 
    while(scanf("%d", &x)){
        if (x ==0)break;
        if( x % 2 ==0){
            if (x%8==0)cnt_mod8++;
            cnt_chan++;
        }else cnt_le++;
    }
    printf("so so chan la %d\n", cnt_chan);
    printf("so so le la %d\n", cnt_le);
    printf("so so chia het cho 8 la %d\n ", cnt_mod8);*/
	
	/********** 13.1.09. **********/
	/*int n =10;
    printf("%d so dau tien cua day Fibonacci la : ", n);
    printf("%d ", 1);
    int f0=0, f1=1;
    for(int i=1; i<n ;i++){
        int temp = f0 + f1;
        f0 = f1;   
        f1 = temp;
        printf("%d ",temp);}
    printf("\n");*/

	/********** 13.1.10. **********/
	/*int n = 207;
    int f0, f1, fcnt ;
    f0 = f1 = 1;
    fcnt = 1;
    while(fcnt < n ){
        f0 = f1;
        f1= fcnt;
        fcnt = f0 + f1;
        if(fcnt == n){
            printf("%d thuoc day fibonacci \n", n);
            return 0;
        }
    }
    printf("%d khong thuoc day fibonacci \n", n);*/

	/********** 13.1.11. **********/
    /*int n;
    double e = 1e-8, a, b, c, x = 10;
    if (!x) {
        printf("can bac 2 cua %d la 0", n);
        return 0;
    }
    n = 0;
    a = x / 2;
    b = 0;
    c = a - b;
    while (c > e) {
        b = 0.5 * (a + x / a);
        c = a - b;
        if (c < 0) {
            c *= -1;
        }
        a = b;
        n++;
    }
    printf("can bac hai cua %d la %lf", x , b);
    printf("\n");*/

	/********** 13.1.12. **********/
	/*int n ;
    double e = 1E-8 ,a , b, c, x=1, y=2, z=3, t=4;
    x= 1000*x+100*y+10*z+t;
    n = 0;
    a =x /2 ;
    b= 0;
    c= a- b;
    while(c>e){
        b=0.5*(a+x/a);
        c=a-b;
        if(c<0)c*=-1;
        a=b;
        n++;
    }
    printf("gia tri can bac 2 cua %d la %lf \n: ", x, b);*/

	/********** 13.1.13. **********/
    /*int m=2 , n=5;
    printf("ma tran %d hang %d cot la : \n", m, n);
    int cnt =1;
    for(int i=0; i<m ; i++){
        for(int j =0; j<n; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf( "\n" );
    }*/
	
	/********** 13.1.14. **********/
	/*int f0,f1, f2;
    f0=f1=45;
    f2=90;
        if (f2<f1){
            int  temp = f1;
            f1 = f2;        
            f2 =temp;
        }
        if (f1<f0) {
            int temp =  f0;
            f0=f1;
            f1=temp;
        }
        if (f1 > f2) {
            int temp = f1;
            f1=f2;
            f2=temp;
        }
        if(f0==f2){ // cạnh bé nhất bằng cạnh lớn nhất là tam giác đều .
            printf("tam giac deu \n");
            return 0;
        }
        if(f0==f1||f1==f2){ //2 cạnh bằng nhau 
            if(f2==f1+f0)printf("tam giac vuong can \n");else{
                printf("tam giac can \n");
            }
            return 0;
        }
        if (f2==f1+f0){ // kiểm tra vuông 
            printf("tam giac vuong \n");
            return 0;
        }
        if (f2<f1+f0){ // kiểm tra tam giác nhọn
            printf("tam giac nhon \n");
        }else printf("tam giac tu \n"); // không nhọn thì tù
        */
	/********** 13.1.15. **********/
        // đưa ra theo thứ tự chũ hoa , chữ thường và chữ số .
    /*for(char i='A'; i<='Z'; i++){ 
        printf(" %c %d \n",i, i);  
    }
    for(char i='a'; i<='z'; i++){
        printf(" %c %d \n",i, i);  
    }  
    for(char i='0'; i<='9'; i++){
        printf(" %c %d \n",i, i);  
    }*/

	/******************************/
	return 0;
}