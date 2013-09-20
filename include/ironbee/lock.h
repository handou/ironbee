/*****************************************************************************
 * Licensed to Qualys, Inc. (QUALYS) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * QUALYS licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

/**
 * @file
 * @brief IronBee --- Lock Utilities
 *
 * @author Sam Baskinger <sbaskinger@qualys.com>
 */

#ifndef _IB_LOCK_H_
#define _IB_LOCK_H_

#include <ironbee/build.h>
#include <ironbee/types.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup IronBeeUtilLocking Locking
 * @ingroup IronBeeUtil
 * Locking primitives.
 * @{
 */

/**
 * @brief The lock type for ironbee locks.
 */
typedef pthread_mutex_t ib_lock_t;

/**
 * @param[in] lock The lock.
 */
ib_status_t DLL_PUBLIC ib_lock_init(ib_lock_t *lock);

/**
 * @param[in] lock The lock.
 */
ib_status_t DLL_PUBLIC ib_lock_lock(ib_lock_t *lock);

/**
 * @param[in] lock The lock.
 */
ib_status_t DLL_PUBLIC ib_lock_unlock(ib_lock_t *lock);

/**
 * @param[in] lock The lock.
 */
ib_status_t DLL_PUBLIC ib_lock_destroy(ib_lock_t *lock);

/**
 * @} IronBeeUtilLocking Locking
 */

#ifdef __cplusplus
}
#endif

#endif // _IB_LOCK_H_
