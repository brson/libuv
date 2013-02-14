#ifndef __ANDROID_H__LIBUV_ANDROID__
#define __ANDROID_H__LIBUV_ANDROID__

#if defined(__ANDROID__)

#include <pthread.h>

typedef struct {
	long tv_sec;
	long tv_nsec;
} timespec;

#define S_IREAD 0400
#define S_IWRITE 0200
#define S_IEXERC 0100


#define PTHREAD_BARRIER_SERIAL_THREAD 0x12345

typedef struct pthread_barrier {
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	unsigned count;
} pthread_barrier_t;

int pthread_barrier_init(pthread_barrier_t* barrier,
		const void* barrier_attr,
		unsigned count);

int pthread_barrier_wait(pthread_barrier_t* barrier);

int pthread_barrier_destroy(pthread_barrier_t* barrier);


#endif

#endif
