# klayout

版本：klayout-0.26.9

**注意**，对源代码有所修改。主要在于解决编译错误和加快编译速度。

需要安装的工具如下：

**C ++** ：gcc，g ++和make

**Qt**：libqt4-dev-bin和libqt4-dev，qt4-qmake

**Ruby**：ruby和ruby-dev

**Python**：python3和python3-dev

**zlib**：libz-dev

**加速编译**：ccache

## qmake

进入klayout目录下，打开终端，输入

    ./build.sh

默认调用qmake.

如果报错提示找不到qmake，输入

    sudo apt install qt4-qmake

等待编译完成。

如果提示找不到QString等库,请排查前述的依赖工具是否已安装

编译成功（未使用ccache时，公司所发的Thinkpad E495 耗时约1小时）

进入 bin-release目录下

输入

    vim ~/.bashrc

在目录最后输入

    export LD_LIBRARY_PATH=“你的bin-release目录路径”

保存并退出

输入

    source ~/.bashrc

再输入

    ./klayout

成功:)

## qtcreator


1.在项目-Build中关闭 shadow build

2.在项目-Run-运行配置中修改运行配置为klayout_main

3.当QTcreator使用的qmake为qt5时，应将layMainWindow.h中的

    #include <QPrinter>
改为
    
    #include <QtPrintSupport/QPrinter>
    
同时，需要在lay.pro中添加
    
    QT += printsupport
    
保存。

4.默认编译会因笔记本内存不足被中止，使用

    sudo fallocate -l 4G /swapfile
    sudo chmod 600 /swapfile
    sudo mkswap /swapfile
    sudo swapon /swapfile
    sudo cp /etc/fstab /etc/fstab.bak
    echo '/swapfile none swap sw 0 0' | sudo tee -a /etc/fstab

来创建交换分区。

5.关闭shadow build后，生成的动态库位于src目录下（若不关闭则生成一个build-klayout-Desktop-xxxxxxxx目录）

与bin-release目录同样的，将src目录加入~/.bashrc。

    vim ~/.bashrc
  
在其末尾添加  

    export LD_LIBRARY_PATH=“你的src目录路径”

保存并退出

    source ~/.bashrc
  
6.如果遇到Makefile错误，提示plugins目录下无法编译完成。形如下图

![bug_png](https://github.com/stuartofmine/klayout/blob/master/klayout-0.26.9/bug.png)

这是由于src目录下的Makefile进入plugins子项目流程时，没有清除上一次失败构建留下的Makefile，并且一共有三个Makefile需要清除。

暂时对src目录下的Makefile不作修改，打开终端，进入src/plugins目录，输入

    rm Makefile */Makefile

即可。

7.点击编译。耗时约十分钟。

8.成功:)

## gdb

示例：

    gdb ./klayout
    b rba.cc:134
    Make breakpoint pending on future shared library load? (y or [n]) y
    r
    
以上代码在rba.cc的134行加入了一个断点。


