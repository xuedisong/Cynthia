#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a = "Time=2022-09-09 16:41:20.623&Da=2022-09-09&Ho=16&a123321b;total:47,prepare:16,recall:14,filter:0,rank:8,strategy:2;2022-09-09 16:41:20;7691a205fcd893635b16f1a74c149a45;wk^5,plat^0,adplan^11094,ippr^510000,isclkttwe^0,hr^16,itid^11836196,istlscttwe^0,ps^39012,country^86,isprefbttwe^1,adgroup^46226,ipcity^510100,ormodel^2190,orbrand^30,isprefttwe^0;wk^5,ps^39012,isprefbttwe^1,plat^0,country^86,orbrand^30,competition^1694,modelcv^9527,isprefttwe^0,hr^16,itid^11836196,adplan^11094,adgroup^46226,ippr^510000,ormodel^2190,ipcity^510100,usermodel^1661,usermodel^2370,usermodel^4308,usermodel^4766,usermodel^7350,isclkttwe^0,istlscttwe^0,autofillname^1,landingpage^2;0.00044,0.3320168583218707,strategy_fm_realtime,0.01244,2190,30,10046,124,20,20,0,0,1,1694,0,11845674,11845674,332,0,2022090916,107414,-77,0.0005022344173577987,0.08803301237964237,0,0,stage1,0,0,0.01244,2,0;124-37-30-38-29|20-14-16-17-14|1:10-8-7-7-7,2:10-8-10-10-7;";
    cout << a << endl;
    string b;
    char c;
    while (cin >> b)
    {
        cout << "log:>>b已执行完成" << endl;
        cin >> c;
        cout << "b:" << b << "." << endl;
        cout << "c:" << c << "." << endl;
    }
    cout << "遇到文件结束符号.b:" << b << endl;
    return 0;
}