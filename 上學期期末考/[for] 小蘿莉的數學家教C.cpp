#include <bits/stdc++.h>
using namespace std;

#define miyuki_is_my_wife_and_sister ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
    miyuki_is_my_wife_and_sister;

/*
     *****
    *******
   *********
  ***********
 *************
***************
Top: 5
Base: 15
Height: 6
Area: (5+15)*6/2=60

*/

    int a{}, b{};
    cin >> a >> b;
    //優化一下效率
    /*
        原code
        for(int i=1;i<=b;i++){
            for(int k=1;k<=b-i;k++){
                cout<<" ";
            }
            for(int j=1;j<=a+2*i-2;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    */

    for (int i = 1, k = a; i <= b; ++i, k += 2) {
        for (int j = 1; j <= b - i; ++j) {
            cout << " ";
        }


        for (int j = 1; j <= k; ++j) {
            cout << "*";
        }
        cout << '\n';
    }
    cout << "Top: "    << a << '\n';
	cout << "Base: "   << a+2*(b-1) << '\n';
	cout << "Height: " << b << '\n';
	cout << "Area: "   << "(" << a << "+" << (a+2*(b-1))<< ")*" << b << "/2=" << (a+(a+2*(b-1)))*b/2 << '\n';


    return 0;
}

//asm
/*
原code
.LC0:
        .string " "
.LC1:
        .string "*"
.LC2:
        .string "\n"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32       //增加stack空間
        lea     rax, [rbp-16] //
        mov     rsi, rax
        mov     edi, OFFSET FLAT:_ZSt3cin
        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
        mov     rdx, rax
        lea     rax, [rbp-20]
        mov     rsi, rax
        mov     rdi, rdx
        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
        mov     DWORD PTR [rbp-4], 1 //for (int i = 1的部份
        jmp     .L2
.L7:
        mov     DWORD PTR [rbp-8], 1 //for (int k = 1的部份
        jmp     .L3
.L4:
        mov     esi, OFFSET FLAT:.LC0
        mov     edi, OFFSET FLAT:_ZSt4cout
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
        add     DWORD PTR [rbp-8], 1
.L3:
        mov     eax, DWORD PTR [rbp-20]
        sub     eax, DWORD PTR [rbp-4] //b - i的部份
        cmp     DWORD PTR [rbp-8], eax //k <= b - i
        jle     .L4
        mov     DWORD PTR [rbp-12], 1  //for (int j = 1的部份
        jmp     .L5
.L6:
        //cout << "*";
        mov     esi, OFFSET FLAT:.LC1
        mov     edi, OFFSET FLAT:_ZSt4cout
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
        add     DWORD PTR [rbp-12], 1 //++j的部份
.L5:
        //編譯器真厲害
        //把j <= a + 2 * i - 2改成了 j < a + 2 * i - 1
        mov     eax, DWORD PTR [rbp-4] //[rbp-4]就是i
        lea     edx, [rax+rax]         //窩不知道
        mov     eax, DWORD PTR [rbp-16]
        add     eax, edx
        sub     eax, 1
        cmp     DWORD PTR [rbp-12], eax //j <= a + 2 * i - 2的部份
        jl      .L6 //小於
        mov     esi, OFFSET FLAT:.LC2
        mov     edi, OFFSET FLAT:_ZSt4cout
        //cout << " ";
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
        add     DWORD PTR [rbp-4], 1 //++j的部份
.L2:
        mov     eax, DWORD PTR [rbp-20] // b
        cmp     DWORD PTR [rbp-4], eax  // i <= b
        jle     .L7
        mov     eax, 0
        leave
        ret
__static_initialization_and_destruction_0(int, int):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        cmp     DWORD PTR [rbp-4], 1
        jne     .L11
        cmp     DWORD PTR [rbp-8], 65535
        jne     .L11
        mov     edi, OFFSET FLAT:_ZStL8__ioinit
        call    std::ios_base::Init::Init() [complete object constructor]
        mov     edx, OFFSET FLAT:__dso_handle
        mov     esi, OFFSET FLAT:_ZStL8__ioinit
        mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
        call    __cxa_atexit
.L11:
        nop
        leave
        ret
_GLOBAL__sub_I_main:
        push    rbp
        mov     rbp, rsp
        mov     esi, 65535
        mov     edi, 1
        call    __static_initialization_and_destruction_0(int, int)
        pop     rbp
        ret

我的code
.LC0:
        .string " "
.LC1:
        .string "*"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        lea     rax, [rbp-20]
        mov     rsi, rax
        mov     edi, OFFSET FLAT:_ZSt3cin
        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
        mov     rdx, rax
        lea     rax, [rbp-24]
        mov     rsi, rax
        mov     rdi, rdx
        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
        mov     DWORD PTR [rbp-4], 1
        mov     eax, DWORD PTR [rbp-20]
        mov     DWORD PTR [rbp-8], eax
        jmp     .L2
.L7:
        mov     DWORD PTR [rbp-12], 1
        jmp     .L3
.L4:
        mov     esi, OFFSET FLAT:.LC0
        mov     edi, OFFSET FLAT:_ZSt4cout
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
        add     DWORD PTR [rbp-12], 1
.L3:
        mov     eax, DWORD PTR [rbp-24]
        sub     eax, DWORD PTR [rbp-4]
        cmp     DWORD PTR [rbp-12], eax
        jle     .L4
        mov     DWORD PTR [rbp-16], 1
        jmp     .L5
.L6:
        mov     esi, OFFSET FLAT:.LC1
        mov     edi, OFFSET FLAT:_ZSt4cout
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
        add     DWORD PTR [rbp-16], 1
.L5:
        mov     eax, DWORD PTR [rbp-16]
        cmp     eax, DWORD PTR [rbp-8]
        jle     .L6
        mov     esi, 10
        mov     edi, OFFSET FLAT:_ZSt4cout
        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char)
        add     DWORD PTR [rbp-4], 1
        add     DWORD PTR [rbp-8], 2
.L2:
        mov     eax, DWORD PTR [rbp-24]
        cmp     DWORD PTR [rbp-4], eax
        jle     .L7
        mov     eax, 0
        leave
        ret
__static_initialization_and_destruction_0(int, int):
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        cmp     DWORD PTR [rbp-4], 1
        jne     .L11
        cmp     DWORD PTR [rbp-8], 65535
        jne     .L11
        mov     edi, OFFSET FLAT:_ZStL8__ioinit
        call    std::ios_base::Init::Init() [complete object constructor]
        mov     edx, OFFSET FLAT:__dso_handle
        mov     esi, OFFSET FLAT:_ZStL8__ioinit
        mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
        call    __cxa_atexit
.L11:
        nop
        leave
        ret
_GLOBAL__sub_I_main:
        push    rbp
        mov     rbp, rsp
        mov     esi, 65535
        mov     edi, 1
        call    __static_initialization_and_destruction_0(int, int)
        pop     rbp
        ret
*/
