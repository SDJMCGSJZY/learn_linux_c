CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

PROJECT(MyDrive)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

ADD_SUBDIRECTORY(11_3_1_pthread_create)
ADD_SUBDIRECTORY(11_4_1_pthread_exit)
ADD_SUBDIRECTORY(11_5_1_pthread_join)
ADD_SUBDIRECTORY(11_6_1_pthread_cancel)
ADD_SUBDIRECTORY(11_6_2_pthread_setcancelstate)
#为上一个项目的补充
ADD_SUBDIRECTORY(11_6_2_1_pthread_setcancelstate)
#为自己根据文档写的代码,取消点，非取消点就无法取消线程
ADD_SUBDIRECTORY(11_6_3_pthread_setcanceltype)
#和上一个效果是一样的，不含取消点
ADD_SUBDIRECTORY(11_6_3_1_pthread_setcanceltype)

