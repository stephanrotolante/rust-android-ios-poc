//
//  NativeC.c
//  Amalagation
//
//  Created by Stephan Rotolante on 4/6/23.
//

#include "NativeC.h"

#include <stdbool.h>
#include <stdio.h>

extern void basic_log();
extern void basic_operation();
extern bool return_bool();
extern __int32_t return_i32();
extern void http_request();

int test_fn() {

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
