#ifndef CONFIG_H
#define CONFIG_H

#define KERNEL_NAME "oss"
#define KERNEL_VERSION "0.0.1"
#define KERNEL_DATE __DATE__
#define KERNEL_TIME __TIME_
#define KERNEL_LICENCE "Apache License"
#define KERNEL_COMPUTERNAME "awesome-pc"

/* Procesador */
#ifdef __x86__
#define KERNEL_IDENTIFIER "x86"
#else
#define KERNEL_PROCESSOR_IDENTIFIER "x86"
#endif

/*Define max open file*/
#define CONFIG_MAX_FILE 32

#endif
