//方法一;枚举
#include<bits/stdc++.h>
using namespace std;

int mp[200][200], row = 0, col = 0, cnt = 1;

int main() {
    mp[0][0] = 1;
    while(!mp[19][19]) {
        //右移
        mp[row][++col] = ++cnt;
        //左下方
        while(col) {
            mp[++row][--col] = ++cnt;
        }
        //下移
        mp[++row][col] = ++cnt;
        //右上方
        while(row) {
            mp[--row][++col] = ++cnt;
        }
    }
    /*for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            cout << mp[i][j] << "  ";
        }
        cout << endl;
    }*/
    cout << mp[19][19];
    return 0;
}

//方法二

int main()
{
    int row=1,col=1,flag=1,num=1;
    while(true){
        if(row==1){
            col++;flag=1;num++;
        }
        if(col==1){
            row++;flag=-1;num++;
        }
        row+=flag;col-=flag;num++;
        if(row==20&&col==20) break;
    }
    cout<<num;
    return 0;
}

//方法三;找规律
//（1.1）=0*0+1*1
//（2，2）=1*1+2*2
//（3,3）=2*2+3*3

//（20,20）=19*19+20*20
