//------------------------------------------------------------------
//
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2006-2015 Hewlett-Packard Development Company, L.P.
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

#ifndef __SB_UTRACEX_H_
#define __SB_UTRACEX_H_

#include "seabed/utrace.h"

#include "seabed/int/opts.h"

typedef enum {
    SB_UTRACE_API_OP_AFIRST,
    SB_UTRACE_API_OP_FS_AWAITIOX,
    SB_UTRACE_API_OP_FS_AWAITIOX_COMP,
    SB_UTRACE_API_OP_FS_AWAITIOX_COMP_OPEN,
    SB_UTRACE_API_OP_FS_AWAITIOXTS,
    SB_UTRACE_API_OP_FS_BUF_READUPDATEX,
    SB_UTRACE_API_OP_FS_CANCEL,
    SB_UTRACE_API_OP_FS_CANCELREQ,
    SB_UTRACE_API_OP_FS_CLOSE,
    SB_UTRACE_API_OP_FS_COMP_IO_WRITE,
    SB_UTRACE_API_OP_FS_COMP_IO_WRITEREAD,
    SB_UTRACE_API_OP_FS_COMP_REPLY_CLOSE_NOOPEN, // auto-reply-mon-open
    SB_UTRACE_API_OP_FS_COMP_REPLY_CLOSE_NOSM,   // auto-reply-close-no sys msg
    SB_UTRACE_API_OP_FS_COMP_REPLY_ERR,          // auto-reply-error
    SB_UTRACE_API_OP_FS_COMP_REPLY_NOSM,         // auto-reply-no sys msg
    SB_UTRACE_API_OP_FS_COMP_REPLY_OPEN,         // auto-reply-open
    SB_UTRACE_API_OP_FS_COMP_REPLY_OPEN_NOSM,    // auto-reply-open-no sys msg
    SB_UTRACE_API_OP_FS_COMP_SM_CHANGE,
    SB_UTRACE_API_OP_FS_COMP_SM_CLOSE,
    SB_UTRACE_API_OP_FS_COMP_SM_CPUDOWN,
    SB_UTRACE_API_OP_FS_COMP_SM_CPUUP,
    SB_UTRACE_API_OP_FS_COMP_SM_OPEN,
    SB_UTRACE_API_OP_FS_COMP_SM_PROCDEATH,
    SB_UTRACE_API_OP_FS_COMP_SM_SHUTDOWN,
    SB_UTRACE_API_OP_FS_COMP_SM_UNKNOWN,
    SB_UTRACE_API_OP_FS_COMP_TPOP,
    SB_UTRACE_API_OP_FS_EXIT,
    SB_UTRACE_API_OP_FS_OPEN,
    SB_UTRACE_API_OP_FS_OPEN_MD,
    SB_UTRACE_API_OP_FS_OPEN_THREAD_START,
    SB_UTRACE_API_OP_FS_OPEN_THREAD_STOP,
    SB_UTRACE_API_OP_FS_READX,
    SB_UTRACE_API_OP_FS_READUPDATEX,
    SB_UTRACE_API_OP_FS_REPLYX,
    SB_UTRACE_API_OP_FS_WRITEX,
    SB_UTRACE_API_OP_FS_WRITEREADX,
    SB_UTRACE_API_OP_MS_EXIT,
    SB_UTRACE_API_OP_MS_LOCIO_ACQUIRE_MSG,
    SB_UTRACE_API_OP_MS_LOCIO_RELEASE_MSG,
    SB_UTRACE_API_OP_MS_LOCIO_SEND,
    SB_UTRACE_API_OP_MS_LOCIO_SEND_RECV,
    SB_UTRACE_API_OP_MS_LOCIO_WAIT_FOR_EVENT,
    SB_UTRACE_API_OP_MS_MON_MSG,
    SB_UTRACE_API_OP_MS_MSG_ABANDON,
    SB_UTRACE_API_OP_MS_MSG_BREAK,
    SB_UTRACE_API_OP_MS_MSG_LINK,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_ABANDON,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_IREQ,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_IREQ_CTRL,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_IREQ_DATA,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_LDONE,
    SB_UTRACE_API_OP_MS_MSG_LISTEN_TPOP,
    SB_UTRACE_API_OP_MS_MSG_REPLY,
    SB_UTRACE_API_OP_MS_REQ_DONE,
    SB_UTRACE_API_OP_MS_SEND_MD,
    SB_UTRACE_API_OP_MSG_INIT,
    SB_UTRACE_API_OP_MSG_INIT_ATTACH,
    SB_UTRACE_API_OP_MSG_MON_CLOSE_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_DEREG_DEATH_NOTIFICATION,
    SB_UTRACE_API_OP_MSG_MON_DEREG_DEATH_NOTIFICATION2,
    SB_UTRACE_API_OP_MSG_MON_DEREG_DEATH_NOTIFICATION3,
    SB_UTRACE_API_OP_MSG_MON_DEREG_DEATH_NOTIFICATION_NAME,
    SB_UTRACE_API_OP_MSG_MON_DEREG_DEATH_NOTIFICATION_NAME2,
    SB_UTRACE_API_OP_MSG_MON_DUMP_PROCESS_ID,
    SB_UTRACE_API_OP_MSG_MON_DUMP_PROCESS_ID2,
    SB_UTRACE_API_OP_MSG_MON_DUMP_PROCESS_NAME,
    SB_UTRACE_API_OP_MSG_MON_ENABLE_MON_MESSAGES,
    SB_UTRACE_API_OP_MSG_MON_EVENT_SEND,
    SB_UTRACE_API_OP_MSG_MON_EVENT_SEND_NAME,
    SB_UTRACE_API_OP_MSG_MON_EVENT_WAIT,
    SB_UTRACE_API_OP_MSG_MON_EVENT_WAIT2,
    SB_UTRACE_API_OP_MSG_MON_GET_NODE_INFO,
    SB_UTRACE_API_OP_MSG_MON_GET_NODE_INFO2,
    SB_UTRACE_API_OP_MSG_MON_GET_NODE_INFO_ALL,
    SB_UTRACE_API_OP_MSG_MON_GET_NODE_INFO_DETAIL,
    SB_UTRACE_API_OP_MSG_MON_GET_OPEN_INFO,
    SB_UTRACE_API_OP_MSG_MON_GET_OPEN_INFO_MAX,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_INFO,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_INFO2,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_INFO_DETAIL,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_INFO_TYPE,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_NAME,
    SB_UTRACE_API_OP_MSG_MON_GET_PROCESS_NAME2,
    SB_UTRACE_API_OP_MSG_MON_GET_TM_SEQ,
    SB_UTRACE_API_OP_MSG_MON_GET_TRANS_INFO_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_GET_TRANS_INFO_TRANSID,
    SB_UTRACE_API_OP_MSG_MON_GET_ZONE_INFO,
    SB_UTRACE_API_OP_MSG_MON_GET_ZONE_INFO_DETAIL,
    SB_UTRACE_API_OP_MSG_MON_MOUNT_DEVICE,
    SB_UTRACE_API_OP_MSG_MON_MOUNT_DEVICE2,
    SB_UTRACE_API_OP_MSG_MON_NODE_DOWN,
    SB_UTRACE_API_OP_MSG_MON_NODE_DOWN2,
    SB_UTRACE_API_OP_MSG_MON_NODE_UP,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_BACKUP,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_IC,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_NOWAIT_CB,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_OID,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_SELF,
    SB_UTRACE_API_OP_MSG_MON_OPEN_PROCESS_SELF_IC,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_CLOSE,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_STARTUP,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_STARTUP2,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_STARTUP3,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_STARTUP4,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_SHUTDOWN,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_SHUTDOWN_FAST,
    SB_UTRACE_API_OP_MSG_MON_PROCESS_SHUTDOWN_NOW,
    SB_UTRACE_API_OP_MSG_MON_REG_GET,
    SB_UTRACE_API_OP_MSG_MON_REG_SET,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION2,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION3,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION4,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION_NAME,
    SB_UTRACE_API_OP_MSG_MON_REG_DEATH_NOTIFICATION_NAME2,
    SB_UTRACE_API_OP_MSG_MON_REOPEN_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_SHUTDOWN,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS2,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS_NOWAIT,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS_NOWAIT2,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS_NOWAIT_CB,
    SB_UTRACE_API_OP_MSG_MON_START_PROCESS_NOWAIT_CB2,
    SB_UTRACE_API_OP_MSG_MON_STOP_PROCESS,
    SB_UTRACE_API_OP_MSG_MON_STOP_PROCESS2,
    SB_UTRACE_API_OP_MSG_MON_STFSD_SEND,
    SB_UTRACE_API_OP_MSG_MON_TM_LEADER_SET,
    SB_UTRACE_API_OP_MSG_MON_TM_READY,
    SB_UTRACE_API_OP_MSG_MON_TMSYNC_ISSUE,
    SB_UTRACE_API_OP_MSG_MON_TMSYNC_REGISTER,
    SB_UTRACE_API_OP_MSG_MON_TRANS_DELIST,
    SB_UTRACE_API_OP_MSG_MON_TRANS_END,
    SB_UTRACE_API_OP_MSG_MON_TRANS_ENLIST,
    SB_UTRACE_API_OP_MS_CONTROLMESSAGESYSTEM,
    SB_UTRACE_API_OP_MS_MESSAGESYSTEMINFO,
    SB_UTRACE_API_OP_THREAD_EXIT,
    SB_UTRACE_API_OP_THREAD_EXIT_DISP1,
    SB_UTRACE_API_OP_THREAD_EXIT_DISP2,
    SB_UTRACE_API_OP_THREAD_EXIT_NAME,
    SB_UTRACE_API_OP_THREAD_START,
    SB_UTRACE_API_OP_THREAD_START_DISP1,
    SB_UTRACE_API_OP_THREAD_START_DISP2,
    SB_UTRACE_API_OP_THREAD_START_ERR,
    SB_UTRACE_API_OP_THREAD_START_NAME,
    SB_UTRACE_API_OP_ZLAST
} SB_Utrace_API_Op_Type;

#ifdef USE_SB_UTRACE_API
#if __WORDSIZE == 64
typedef long SB_Utrace_API_Info_Type;
#define SB_UTRACE_PINFOD "%ld"
#define SB_UTRACE_PINFOX "%lx"
#else
typedef int  SB_Utrace_API_Info_Type;
#define SB_UTRACE_PINFOD "%d"
#define SB_UTRACE_PINFOX "%x"
#endif
typedef struct SB_Utrace_API_Type {
    int                     iv_tid;         // tid
    SB_Utrace_API_Op_Type   iv_op;          // operation
    int                     iv_id;          // msgid/fnum/msgtype
    SB_Utrace_API_Info_Type iv_info1;       // listen-type/tag
} SB_Utrace_API_Type;
#endif // USE_SB_UTRACE_API

#ifdef USE_SB_UTRACE_API
extern SB_Utrace<SB_Utrace_API_Type> sb_utrace_api;
#endif // USE_SB_UTRACE_API

#ifdef USE_SB_UTRACE_API
#define SB_UTRACE_API_ADD2(pv_op,pv_id) \
{ \
  SB_Utrace_API_Type *lp_entry = sb_utrace_api.get_entry(); \
  lp_entry->iv_tid = sb_utrace_gettid(); \
  lp_entry->iv_op = pv_op; \
  lp_entry->iv_id = pv_id; \
}
#define SB_UTRACE_API_ADD3(pv_op,pv_id,pv_info1) \
{ \
  SB_Utrace_API_Type *lp_entry = sb_utrace_api.get_entry(); \
  lp_entry->iv_tid = sb_utrace_gettid(); \
  lp_entry->iv_op = pv_op; \
  lp_entry->iv_id = pv_id; \
  lp_entry->iv_info1 = pv_info1; \
}
#define SB_UTRACE_API_ADDC(pv_op,pp_name) \
{ \
  SB_Utrace_API_Type *lp_entry = sb_utrace_api.get_entry(); \
  enum { MAX_STR = sizeof(lp_entry->iv_id) + sizeof(lp_entry->iv_info1) }; \
  lp_entry->iv_tid = sb_utrace_gettid(); \
  lp_entry->iv_op = pv_op; \
  lp_entry->iv_id = 0; \
  lp_entry->iv_info1 = 0; \
  size_t lv_len = strlen(pp_name); \
  if (lv_len > MAX_STR) \
      lv_len = MAX_STR; \
  memcpy(&lp_entry->iv_id, pp_name, lv_len); \
}
#else
#define SB_UTRACE_API_ADD2(pv_op,pv_id)
#define SB_UTRACE_API_ADD3(pv_op,pv_id,pv_info1)
#define SB_UTRACE_API_ADDC(pv_op,pp_name)
#endif // USE_SB_UTRACE_API

#ifdef USE_SB_UTRACE_API
extern const char *sb_get_utrace_api_op(int);
#define SB_UTRACE_API_TEST() sb_get_utrace_api_op(SB_UTRACE_API_OP_AFIRST + 1)
#else
#define SB_UTRACE_API_TEST()
#endif // USE_SB_UTRACE_API

#endif // __SB_UTRACEX_H_
