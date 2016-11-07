LIBSRCS:=$(shell find src -name '*.cpp')
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := demo
LOCAL_SRC_FILES := $(LIBSRCS)

LOCAL_C_INCLUDES += ./src

# LOCAL_CFLAGS :=
# LOCAL_CFLAGS +=

# LOCAL_LDFLAGS +=

include $(BUILD_SHARED_LIBRARY)
