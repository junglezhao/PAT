/*
1082 射击比赛 （20 分）
本题目给出的射击比赛的规则非常简单，谁打的弹洞距离靶心最近，谁就是冠军；谁差得最远，谁就是菜鸟。
本题给出一系列弹洞的平面坐标(x,y)，请你编写程序找出冠军和菜鸟。我们假设靶心在原点(0,0)。

输入格式：
输入在第一行中给出一个正整数 N（≤ 10 000）。随后 N 行，每行按下列格式给出：

ID x y
其中 ID 是运动员的编号（由 4 位数字组成）；x 和 y 是其打出的弹洞的平面坐标(x,y)，均为整数，
且 0 ≤ |x|, |y| ≤ 100。题目保证每个运动员的编号不重复，且每人只打 1 枪。

输出格式：
输出冠军和菜鸟的编号，中间空 1 格。题目保证他们是唯一的。

输入样例：
3
0001 5 7
1020 -1 3
0233 0 -1

输出样例：
0233 0001
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct player{
    int num;
    int d;
}p[10001];

int main()
{
    int n, ch = 0, ob = 0, x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i].num >> x >> y;
        p[i].d = x * x + y * y;
        if(p[i].d < p[ch].d){
            ch = i;
        }else if(p[i].d > p[ob].d){
            ob = i;
        }
    }
    printf("%04d %04d", p[ch].num, p[ob].num);
    return 0;
}
