# cynthia
cynthia is a project using "C++"

```
如何编译使用C++程序。
首先必须使用 Makefile 命令行
所以直接使用命令行，即可。

按照书里的说明。

c++ g++ .cpp/.cc
c gcc .c
linux下编译c++代码用g++，c++代码的文件后缀为.cpp或.cc，编译c代码用gcc，c代码的文件后缀为.c。

g++的常用参数说明:

-c 表示编译代码
-o 表示指定生成的文件名
-g 表示编译时候加入调试符号信息，debug时候需要这些信息
-I (大写i)表示设置头文件路径，-I./表示头文件路径为./
-Wall 表示输出所有警告信息
-D 表示设置宏定义,-DDEBUG表示编译debug版本,-DNDEBUG表示编译release版本
-O 表示编译时候的优化级别，有4个级别-O0,-O1,-O2 -O3，-O0表示不优化,-O3表示最高优化级别
-shared 表示生成动态库
-L 指定库路径，如-L.表示库路径为当前目录
-l (小写L)指定库名，如-lc表示引用libc.so

# eigen tutorial
https://docs.huihoo.com/eigen/3/GettingStarted.html
```
```
# g++ 编译选项
-L/dir -la 要放在-o选项后面， 在/dir下找liba.so 或者是 liba.a。如果在默认位置/usr/local/lib，则不用查找。
g++ -o fm a.o 
g++ -o fm a.cc
总的来说，-o就是生成文件的名称，至于要链接的是源文件还是编译后的文件都可以。

$@--目标文件，$^--所有的依赖文件，$<--第一个依赖文件。
```