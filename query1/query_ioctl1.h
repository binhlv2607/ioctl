#ifndef QUERY_IOCTL_H
#define QUERY_IOCTL_H
#include <linux/ioctl.h>
 
typedef struct
{
    int status, dignity, ego;
} query_arg_t;
 
#define QUERY_GET_VARIABLES _IOR('q', 4, query_arg_t *)
#define QUERY_CLR_VARIABLES _IO('q', 5)
#define QUERY_SET_VARIABLES _IOW('q', 6, query_arg_t *)
 
#endif

