//
// Created by kenhuang on 2019-11-13.
//
#include "Runnable.h"
/***********************************************************************************************************************
 *  私有方法
 **********************************************************************************************************************/
static void deinit(Runnable *self) {

}

/***********************************************************************************************************************
 *  公有方法
 **********************************************************************************************************************/
Runnable *Runnable_init(Runnable *self,void* (*run)(void*)) {
    if (Object_init((Object *) self)) {
        self->run = run;
    }
    return self;
}

/***********************************************************************************************************************
 *  静态方法
 **********************************************************************************************************************/
INTERFACE_STATIC_INIT(Runnable)

END