#include<bits/stdc++.h>
using namespace std;
int main(){
    // 13.1
    /*long long ans = 1; // tạo 1 biến kết quả 
    int n;
     cin>>n; // nhập n
     // nhân các số từ 1 đến n
     for(int i=1; i<=n; i++)ans*=i;  
     cout<<ans; 
     */

    // 13.2
    /*int x;
    long long ans=1; // tạo 1 biến kết quả
    int n;
    cin>>x; // nhập cơ số
    cin>>n; // nhập số mũ
    // nhân cơ số n lần
    for(int i=1; i<=n ; i++)ans*=x;
    cout<<ans; //đưa ra màn hình kết quả
    */
    
    //13.3
    /*
    int n;
    cin>>n; // nhập n 
    double ans=0, d; 
    // cộng các phân số từ 1/2 đến 1/2n
    for(int i=1; i<=n; i++){
        d=1.0/i;
        d/=2;
        //cout<<d<<endl; 
        ans+=d;
    }
    cout<<ans;// đưa kết quả ra màn hình 
    */

    //13.4
    /*
    int n;
    cin>>n; // nhập n
    bool f = true; 
    // kiểm tra số nguyên tố 
    for(int i = 2 ; i < n; i++){
        if(n%i==0)f=false;
    }
    if(f==false)cout<<"Khong phai so nguyen to";else cout<<"La so nguyen to";
    */

   //13.5
   /*
   int n, k;
   cin>>n>>k;
   int tu = 1;
   for(int i=1; i<=n ; i++)tu*=i; // tính n!
   int mau1 = 1; 
   int mau2 = 1;
   for(int i=1; i<=k; i++)mau1*=i; // tính k!
   for(int i=1; i<=n-k; i++)mau2*=i; // tính (n-k)!
   float ans = tu/mau1;
   ans/=mau2;
   cout<<ans; // đưa kết quả ra màn hình 
   */

   //13.6 
  /*
  string s=""; 
  int n;
  cin>>n; // nhập n 
  // chuyển sang 1 byte hệ nhị phân
  while (s.size()<8){
    int d= n%2;
    s=char('0'+d)+s;
    n-=d;
    n/=2;
  }
  cout<<s; // đưa kết quả ra màn hình 
  */

    //13.7
    /*
    int n;
    int mn=1E6, mx=-1; // tạo 2 biến min và max
    // nhập cho đến khi xuất hiện 0
    while (cin>>n){
        if(n!=0){
            mn=min(mn,n); // tìm min
            mx=max(mx,n); // tìm max
        }else {
            cout<<"gtln"<<mx<<endl; // xuất ra màn hình 
            cout<<"gtnn"<<mn;       // xuất ra màn hình 
            return 0;
        }
    }
    */
    //13.8
    /*
    int chan=0, le=0, x , mod8=0;
    // nhập cho đến khi xuất hiện số 0
    while (cin>>x){
        if (x!=0){
            if(x%2==0)chan++;else le++; // kiểm tra chẵn lẻ
            if(x%8==0)mod8++;           // kiểm tra chia hết cho 8
        }else {
            // đưa ra màn hình 
            cout<<"so so chan:"<<chan<<endl; 
            cout<<"so so le: "<<le<<endl;
            cout<<"so so chia het cho 8 :"<<mod8<<endl;
        }
    }*/
    //13.9
    /*
    int f[100000];
    f[0]=f[1]=1; // hai số đầu của dãy fibonacci
    int n;
    cin>>n; // nhập vào màn hình 
    cout<<"n so dau cua day Fibonacci: "<<endl;
    cout<<f[0]<<endl<<f[1]<<endl;
    // công thức dãy fibonacci
    for(int i=2; i<n ; i++){
        f[i]=f[i-2]+f[i-1];
        cout<<f[i]<<endl; // đưa ra màn hình 
    }
    */
    //13.10
    /*int N=1E5+1;
    int f[N];
    int n;
    cin>>n; // nhập n
    f[0]=f[1]=1; // hai số đầu của dãy fibonacci
    int d=1;
    bool check=false;
    if (n==1)check=true;
    // tạo 1 dãy fibonacci tăng dần tiệm cận đến n
    while(f[d]<=n){
        d++;
        f[d]=f[d-1]+f[d-2];
        if(f[d]==n)check=true;
    }
    if(check)cout<<"Yes";else cout<<"No";// đưa kết quả ra màn hình 
    */
    //13.11
    /*float N=1E-8;
    int n;
    cin>>n; // nhập n 
    float low=0, high= 100000;
    // tìm kiếm nhị phân 
    float mid =(low+high)/2;
    while (abs(mid*mid -n) > N){
        mid =(low+high)/2;
        if (mid*mid < n)low=mid;else high=mid ;
    }
    cout<<mid;*/
    //13.12
    /*int a,b, c, d;
    cin>>a>>b>>c>>d;
    for(int i =  1000; i< 10000; i++){ // duyệt tất cả các số có 4 chữ số.
        int f[10]; // mảng này tạo ra để kiểm tra những chữ số xuất hiện 2 lần vd: 1232.
        for(int j=0; j<10; j++)f[j]=0;
        int e=i;
        int x= e/1000; // lấy chứ số hàng nghìn 
        e-=1000*x;
        f[x]++;  
        if(x==a || x==b || x==c || x==d){ 
            int y=e/100;  // lấy chữ số hàng trăm
            e-=100*y; 
            f[y]++;
            if(y==a || y==b || y==c || y==d){
                int z=e/10; // lấy chữ số hàng chục 
                f[z]++;
                e-=z*10; // lấy chữ số hàng đơn vị
                if(z==a || z==b || z==c || z==d){
                    if(e==a || e==b || e==c || e==d){
                        f[e]++;
                        if(f[a]==1 && f[b]==1 &&f[c]==1 &&f[d]==1) // kiểm tra đảm bảo mỗi chữ số xuất hiện 1 lần 
                        cout<<sqrt(i)<<endl; // đưa ra kết quả
                    }
                }
            }
        }
    }
    */
    //13.13
    /*int m , n;
    cin>>m>>n; // nhập m hàng n cột 
    for(int i=0; i<m; i++){
        for(int j=1; j<=n; j++){
            cout<<n*i+j<<" "; // công thức
        }
        cout<<endl;
    }
    */
    // 13.14
    /*int f[3];
    cin>>f[0]>>f[1]>>f[2]; // nhập 3 bình phương dưới dạng mảng
    sort(f, f+3);          // để sort cho tiện
    if(f[0]==f[2]){ // cạnh bé nhất bằng cạnh lớn nhất là tam giác đều .
        cout<<"tam giac deu";
        return 0;
    }
    if(f[0]==f[1]&&f[1]==f[2]){ //2 cạnh bằng nhau 
        if(f[2]==f[1]+f[0])cout<<"tam giac vuong can";else{
            cout<<"tam giac can";
        }
        return 0;
    }
    if (f[2]==f[1]+f[0]){ // kiểm tra vuông 
        cout<<"tam giac vuong";
        return 0;
    }
    if (f[2]<f[1]+f[0]){ // kiểm tra tam giác nhọn
        cout<<"tam giac nhon";
    }else cout<<"tam giac tu "; // không nhọn thì tù
    return 0;
    */
    // 13.15
    /*
    // đưa ra theo thứ tự chũ hoa , chữ thường và chữ số .
    for(char i='A'; i<='Z'; i++){ 
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
}