## 构建命令(当父目录名为jni时只需执行如下命令)

`ndk-build`或`ndk-build V=1`

**附(清除命令)：**`ndk-build clean`

## 构建命令(当父目录名不为jni时需要执行如下命令)

`ndk-build V=1 NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=Android.mk NDK_APPLICATION_MK=Application.mk`

**附(清除命令)：**`ndk-build clean NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=Android.mk NDK_APPLICATION_MK=Application.mk`


## ndk-build命令的参数选项

所有给ndk-build的选项都会直接传给GNU Make，由make运行NDK的编译脚本。几个常见调用方式如下：  

`ndk-build` —— 编译  

`ndk-build clean` —— 清掉二进制文件  

`ndk-build V=1` —— 执行ndk-build且打印出它所执行的详细编译命令  

`ndk-build -B` —— 强制重新编译  

`ndk-build -B V=1` —— -B 和 V=1 的组合  

`ndk-build NDK_DEBUG=1` —— 编译为可调试版的二进制文件  

`ndk-build NDK_DEBUG=0` —— 编译为release版  

`ndk-build NDK_LOG=1` —— 打印出内部的NDK日志信息（用于调试NDK自己）  

`ndk-build NDK_APPLICATION_MK=<文件路径>` —— 用这里指定的路径寻找Application.mk文件  

`ndk-build -C <project路径>` ——  先cd进入`<project路径>`，然后执行ndk-build  

** ndk-build的实质 **
ndk-build 其实就是对GNU Make的封装，它的目的是调用正确的NDK编译脚本，它等价于 make -f $NDKROOT/build/core/build-local.mk [参数]