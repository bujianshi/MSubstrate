/*
 * Hooker.h
 *
 *  Created on: 2016��2��22��
 *      Author: peng
 */

#ifndef HOOKER_H_
#define HOOKER_H_

#include <sys/mman.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "Debug.h"
#include "Log.h"
#include "PosixMemory.h"
#include "CydiaSubstrate.h"

namespace Cydia{

	_extern void MSHookFunction(void *symbol, void *replace, void **result);
}
#endif /* HOOKER_H_ */
