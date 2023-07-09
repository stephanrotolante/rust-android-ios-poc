#include <stdbool.h>
#include <stdio.h>

#include <jni.h>

extern "C" void basic_log();
extern "C" void basic_operation();
extern "C" bool return_bool();
extern "C" __int32_t return_i32();
extern "C" void http_request();

extern "C" JNIEXPORT jint JNICALL

Java_com_example_amalagation_MainActivity_doBasic(JNIEnv *env, jobject thiz) {

  http_request();

  basic_log();

  basic_operation();

  bool some_bool = return_bool();

  if (some_bool) {
    printf("this is true\n");
  } else {
    printf("this is false\n");
  }

  __int32_t num = return_i32();

  printf("%d\n", num);
  return 99;
}
