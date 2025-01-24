#include<stdio.h>
#include "./src/log.h"

int main() {
    FILE *fp = fopen("log.txt", "a+");
      if(fp == NULL){
              printf("create log file failed.\n");
              return -1;
      }

      //设置日志级别(在终端打印)
      log_set_level(LOG_TRACE);

      //设置日志级别(在文件中打印)
      log_add_fp(fp, LOG_INFO);


      log_trace("start trace.");
      log_debug("start debug.");
      log_info("start info.");
      log_warn("start warn.");
      log_error("start error.");
      log_fatal("start fatal");

      // 支持参数打印
      log_info("number is %d, string is %s", 10010, "helloword");

      fclose(fp);

    return 0;
    
}