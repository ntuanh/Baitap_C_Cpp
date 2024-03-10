// Bài tập tổng hơp 13.1
// MSSV : 20233258
// Họ và tên : Nguyễn Tuấn Anh 
// code không sử dụng string , mảng array, sửa lỗi văn bản .
// code C++ --> https://github.com/ntuanh/Baitap_C_Cpp/blob/homework131/homework131/20233258_NguyenTuanAnh.cpp
// code C   --> https://github.com/ntuanh/Baitap_C_Cpp/blob/homework131/homework131/20233258_NguyenTuanAnh.c
// code Python --> https://github.com/ntuanh/Baitap_C_Cpp/blob/homework131/homework131/20233258_NguyenTuanAnh.py
#include<iostream>
using namespace std;
int main(){
/********** 13.1.01. **********/
/*int n = 10 , res = 1;
for (int i = 2; i <= 10; i++) res *= i;
cout << res << endl;*/

/********** 13.1.02. **********/
/*int x = 3;
int n = 4;
long res = x;
for (int i = 1; i < n; i++) res *= x;
cout << res << endl;*/


/********** 13.1.03. **********/
/*int n = 3;
float res = 1;
for (int i = 1; i <= n; i++) res += 1.0 / ( i * 2 );
cout << res << endl;*/


/********** 13.1.04. **********/
/*int x = 12345;
for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
        cout << x << " khong la so nguyen to " << endl;
        return 0;
    }
}
cout << x << " la so nguyen to " << endl;*/


/********** 13.1.05. **********/
/*int n = 7, k = 3;
int tu = 1;
for (int i = k + 1; i <= n; i++) tu *= i;
for (int i = 1; i <= n - k; i++) tu /= i;
cout << tu << endl;*/


/********** 13.1.06. **********/
/*int n = 20, res = 0, d = 8, k=1;
cout << "ma nhi phan cua " << n << " la : ";
while (n > 0) {
    int r = n % 2;
    r *= k ;
    res += r ;
    n /= 2;
    d--;
    k *= 10;
}
while (d-- > 0) {
    cout << 0;
}
cout << res << endl;*/

/********** 13.1.07. **********/
/*long long mx = LLONG_MIN, mn = LLONG_MAX, x;
while (cin >> x ) {
    if (x == 0) break;
    if  (mx < x) mx = x;
    if  (mn > x) mn = x;
}
cout << "so lon nhat la " << mx << endl;
cout << "so be nhat la " << mn << endl;*/


/********** 13.1.08. **********/
/*int cnt_c = 0, cnt_l = 0, cnt_8 = 0;
int x;
while (cin >> x) {
    if (x != 0) {
        if (x % 2 == 0) {
            cnt_c++;
            if (x % 8 == 0) cnt_8++;
        } else cnt_l++;
    } else {
        cout << "so so chan la " << cnt_c << endl;
        cout << "so so le la   " << cnt_l << endl;
        cout << "so so chia het cho 8 la " << cnt_8 << endl;
        break;
    }
}*/


/********** 13.1.09. **********/
/*int n = 7;
int f0 = 0, f1 = 1;
cout << n << " so dau tien cua day fibonacci la : ";
cout << 1 << " ";
for (int i = 1; i < n; i++) {
    f1 += f0;
    f0 = f1 - f0;
    cout << f1 << " ";
}*/



/********** 13.1.10. **********/
/*int n = 207;
int f0 = 0, f1 = 1;
while (f1 < n) {
    f1 += f0;
    f0 = f1 - f0;
    if (f1 == n) {
        cout << n << " thuoc day Fibonacci";
        return 0;
    }
}
cout << n << " khong thuoc day Fibonacci";*/


/********** 13.1.11. **********/
/*int num = 10;
double error = 1e-8 , s = num; 
while ((s - num / s) > error) {
    s = (s + num / s) / 2;
}
cout << "can bac hai cua " << num << " la " << s << endl;*/


/********** 13.1.12. **********/
/*int a = 1, b = 2, c = 5, d = 6;
int num = 1000 * a + 100 * b + 10 * c + d;
double error = 1e-8, s = num;
while ((s - num / s) > error) {
    s = (s + num / s) / 2;
}
cout << "can bac hai cua " << num << " la " << s << endl;*/


/********** 13.1.13. **********/
/*int m = 2, n = 5, cnt = 1;
cout << "ma tran " << m << " hang " << n << " cot la :" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << cnt++ << " ";
    }
    cout << endl;
}*/

/********** 13.1.14. **********/
/*int f0 = 45, f1 = 45, f2 = 90;
if (f2 < f1) swap(f2, f1);
if (f1 < f0) swap(f1, f0);
if (f1 > f2) swap(f2, f1);
if (f0 == f2) { // cạnh bé nhất bằng cạnh lớn nhất là tam giác đều .
    cout << "tam giac deu";
    return 0;
}
if (f0 == f1 || f1 == f2) { //2 cạnh bằng nhau 
    if (f2 == f1 + f0) cout << "tam giac vuong can";
    else {
        cout << "tam giac can";
    }
    return 0;
}
if (f2 == f1 + f0) { // kiểm tra vuông 
    cout << "tam giac vuong";
    return 0;
}
if (f2 < f1 + f0) { // kiểm tra tam giác nhọn
    cout << "tam giac nhon";
} else cout << "tam giac tu "; // không nhọn thì tù*/

/********** 13.1.15. **********/
// đưa ra theo thứ tự chũ hoa , chữ thường và chữ số .
/*for (char i = 'A'; i <= 'Z'; i++) { 
    cout << i << " " << int(i) << endl;
}
for (char i = 'a'; i <= 'z'; i++) {
    cout << i << " " << int(i) << endl;
}  
for (char i = '0'; i <= '9'; i++) {
    cout << i << " " << int(i) << endl;
}*/

return 0;
}