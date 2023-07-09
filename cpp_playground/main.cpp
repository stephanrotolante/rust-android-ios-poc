#include <stdbool.h>
#include <stdio.h>

extern "C" void basic_log();
extern "C" void basic_operation();
extern "C" bool return_bool();
extern "C" __int32_t return_i32();
extern void http_request();

int main() {

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

  http_request();
  return 99;
}
