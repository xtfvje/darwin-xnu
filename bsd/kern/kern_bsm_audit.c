 * Copyright (c) 2004 Apple Computer, Inc. All rights reserved.

#include <sys/vnode.h>
	bsm_audit_mutex = mutex_alloc(ETAP_NO_TRACE);
			kfree((vm_offset_t)rec, (vm_size_t)sizeof(*rec));
int kau_close(struct au_record *rec, struct timespec *ctime, short event)
		kfree((vm_offset_t)tok, sizeof(*tok) + tok->len);
 
void
        case A_SETPOLICY:
        case A_SETKMASK:
        case A_SETQCTRL:
        case A_SETUMASK:
        case A_SETSMASK:
        case A_SETCOND:
        case A_SETCLASS:
        case A_SETPMASK:
        case A_SETFSIZE:
	
		tok = au_to_arg32(1, "addr", (u_int32_t)ar->ar_arg_addr);
		tok = au_to_arg32(2, "len", ar->ar_arg_len);
		tok = au_to_arg32(3, "addr", (u_int32_t)ar->ar_arg_addr);
				tok = au_to_arg32(1, "setgroups", 							ar->ar_arg_groups.gidset[ctr]);
bsm_rec_verify(void *rec)