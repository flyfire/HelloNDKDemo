//
// Created by Administrator on 2023/2/8 0008.
//
#include "com_solarexsoft_ndkdemo_HelloNDK.h"
JNIEXPORT jstring JNICALL Java_com_solarexsoft_ndkdemo_HelloNDK_hello
  (JNIEnv *env, jclass clz) {
  return env->NewStringUTF("Hello,Solarex");
}
