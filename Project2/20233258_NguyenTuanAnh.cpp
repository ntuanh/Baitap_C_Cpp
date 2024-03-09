#include<iostream>
#include<iomanip>
using namespace std;
int main(){
/********** 13.1.01. **********/
/*int n = 10;
long res=1;
for(int i=2; i<=10; i++)res*=i;
cout<<res<<endl;*/

/********** 13.1.02. **********/
/*int x=3;
int n= 4;
long res=1;
for(int i=0; i<n; i++)res*=x;
cout<<res<<endl;*/

/********** 13.1.03. **********/
/*int n =3;
float res = 1;
for(int i=1; i<=n; i++)res += 1.0/i*2;
cout<<res<<endl;*/

/********** 13.1.04. **********/
/*int x =12345;
for(int i=2; i*i <= x ; i++){
    if(x%i==0){
        cout<<x<<" khong la so nguyen to "<<endl;
        return 0;
    }
}
cout<<x<<" la so nguyen to "<<endl;*/

/********** 13.1.05. **********/
/*int k= 3, n=7;
long long tu =1, mau1=1, mau2=1;
for(int i=1; i<=n; i++)tu*=i;
for(int i=1; i<=k; i++)mau1*=i;
for(int i=1; i<=n-k; i++)mau2*=i;
float res= tu / mau1;
res/= mau2;
cout<<res<<endl;*/

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
cout<<"ma nhi phan cua " << m<<" la "<<f7<<f6<<f5<<f4<<f3<<f2<<f1<<f0;
cout<<endl;*/

/********** 13.1.07. **********/
/*long long mx= LLONG_MIN, mn = LLONG_MAX;
long long x;
while(cin>>x){
    mx = max( mx, x );
    mn = min( mn, x);
    if(x == 0)break;
}
cout<<"so lon nhat la " << mx<<endl;
cout<<"so be nhat la "<<mn <<endl;
return 0;*/

/********** 13.1.08. **********/
/*int cnt_c=0, cnt_l=0, cnt_8=0;
int x;
while(cin>>x){
    if (x !=0){
        if(x%2==0){
            cnt_c++;
            if(x%8==0)cnt_8++;
        }else cnt_l++;
    }else {
        cout<<"so so chan la "<<cnt_c<<endl;
        cout<<"so so le la   "<<cnt_l<<endl;
        cout<<"so so chia het cho 8 la "<<cnt_8<<endl;
        break;
    }
}*/

/********** 13.1.09. **********/
/*int n = 7;
int f0=1 , f1 =1;
cout<<n << " so dau tien cua day fibonacci la : ";
if(n==1){
    cout<<1<<endl;
    return 0;
}else {
    cout<<1 <<" "<<1<<" ";
    for(int i=2; i<n; i++){
        int d= f0+f1;
        f0=f1;
        f1=d;
        cout<<d<<" ";
    }
}
*/

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
        cout<<n<<" thuoc day FIbonacci";
        return 0;
    }
}
cout<< n <<" khong thuoc day Fibonacci";*/

/********** 13.1.11. **********/
/*int n ;
double e = 1E-8 ,a , b, c, x=10;
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
cout<<"gia tri can bac 2 cua " <<x<<" la : "<<b;*/

/********** 13.1.12. **********/
/*int n ;
double e = 1E-8 ,a , b, c, x=1234;
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
cout<<"gia tri can bac 2 cua " <<x<<" la : "<<b;*/

/********** 13.1.13. **********/
/*int m=2 , n=5;
cout<<"ma tran " << m <<" hang "<<n<<" cot la :"<<endl;
int cnt =1;
for(int i=0; i<m ; i++){
    for(int j =0; j<n; j++){
        cout<<cnt<<" ";
        cnt++;
    }
    cout<<endl;
}*/

/********** 13.1.14. **********/
/*int f0,f1, f2;
f0=f1=45;
f2=90;
    if (f2<f1)swap(f2,f1);
    if (f1<f0) swap(f1,f0);
    if (f1 > f2) swap(f2,f1);
    if(f0==f2){ // cạnh bé nhất bằng cạnh lớn nhất là tam giác đều .
        cout<<"tam giac deu";
        return 0;
    }
    if(f0==f1||f1==f2){ //2 cạnh bằng nhau 
        if(f2==f1+f0)cout<<"tam giac vuong can";else{
            cout<<"tam giac can";
        }
        return 0;
    }
    if (f2==f1+f0){ // kiểm tra vuông 
        cout<<"tam giac vuong";
        return 0;
    }
    if (f2<f1+f0){ // kiểm tra tam giác nhọn
        cout<<"tam giac nhon";
    }else cout<<"tam giac tu "; // không nhọn thì tù
    return 0;*/

/********** 13.1.15. **********/
    // đưa ra theo thứ tự chũ hoa , chữ thường và chữ số .
    /*for(char i='A'; i<='Z'; i++){ 
        cout<<i<<" "<<int(i)<<endl;
    }
    cout<<endl;
    for(char i='a'; i<='z'; i++){
        cout<<i<<" "<<int(i)<<endl;
    }
    cout<<endl;   
    for(char i='0'; i<='9'; i++){
        cout<<i<<" "<<int(i)<<endl;
    }*/
return 0;
}