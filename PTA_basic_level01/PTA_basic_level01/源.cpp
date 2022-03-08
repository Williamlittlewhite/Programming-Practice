#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        char a[100] = { 0 };
        scanf("%s", a);
        int len = strlen(a);
        int p = 0, t = 0, left = 0, mid = 0, right = 0;
        for (int i = 0;i < len;i++) {
            if (a[i] == 'A' && p == 0 && t == 0) {//◊Û
                left++;
                continue;
            }
            else if (a[i] == 'P') {//p
                p++;
                continue;
            }
            else if (a[i] == 'A' && p > 0 && t == 0) {//÷–
                mid++;
                continue;
            }
            else if (a[i] == 'T') {//t
                t++;
                continue;
            }
            else if (a[i] == 'A' && p > 0 && t > 0) {//”“
                right++;
                continue;
            }
            else
                break;
        }
        if (p == 1 && t == 1 && mid != 0 && left * mid == right)// aPATa
            printf("YES\n");
        else if (p == 1 && t == 1 && mid == 1 && left == 0 && right == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

