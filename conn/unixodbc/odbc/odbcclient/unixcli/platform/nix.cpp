/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2007-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
********************************************************************/

#include <nix.h>

#ifdef __cplusplus
extern "C"
{
#endif

int EnterCriticalSection2(Async_Mutex *mutex)
{
	if(mutex != NULL)
	   return mutex->Lock();

} /* EnterCriticalSection() */

int LeaveCriticalSection2(Async_Mutex *mutex)
{
	if(mutex != NULL)
	   return mutex->UnLock();

} /* LeaveCriticalSection() */


#ifdef __cplusplus
}
#endif