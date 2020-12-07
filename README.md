# klayout

版本：klayout-0.26.9

**注意**，对源代码有所修改。主要在于解决编译错误和加快编译速度。

需要安装的工具如下：

C ++工具链：gcc，g ++和make

Qt包括开发工具：libqt4-dev-bin和libqt4-dev，qt4-qmake

Ruby：ruby和ruby-dev

Python：python3和python3-dev

zlib：libz-dev

加速编译：ccache

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

默认编译会因内存不足报错，使用

    free
    dd if=/dev/zero of=/var/swap.img bs=1024k count=1000
    mkswap /var/swap.img
    swapon /var/swap.img
    free

来创建交换分区。

编译完成。耗时约十分钟

进入build-klayout-Desktop-xxxxxxxx目录下，会发现其结构与bin-release目录相似。

那么同样的：

    vim ~/.bashrc
  
在其末尾添加  

    export LD_LIBRARY_PATH=“你的build-klayout-Desktop-xxxxxxxx目录路径”

保存并退出

    source ~/.bashrc
  
再运行

    ./klayout


使用qtcreator进行断点调试正在摸索中。。。
