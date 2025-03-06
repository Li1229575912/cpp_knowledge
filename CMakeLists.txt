cmake_minimum_required(VERSION 3.28) #指定所需的最小版本号 放在最前
project(helloword VERSION 0.1.0 LANGUAGES CXX) # 项目名 版本号 开发语言
# add_executable(helloword 1hello.cpp) 可执行文件名 包含哪些源文件
# cmake -G 可以指定生成器，生成Makefile后 执行make命令就生成可执行程序了
# cmake --build . 可直接生成可执行文件

add_executable(helloword)

target_sources(helloword
    PRIVATE
        1hello.cpp
)