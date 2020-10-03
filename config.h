/* linux */
#define SYSCONFDIR	"/system/etc/dhcpcd-6.8.2"
#define SBINDIR	"/system/etc/dhcpcd-6.8.2"
#define LIBEXECDIR	"/system/etc/dhcpcd-6.8.2"
#define DBDIR	"/data/misc/dhcp-6.8.2"
#define RUNDIR	"/data/misc/dhcp-6.8.2"
//#define HAVE_EPOLL
#undef HAVE_EPOLL
#undef USE_SIGNALS
#define AID_DBUS 1038
typedef uint32_t in_addr_t;
#ifndef NBBY
#define NBBY  8
#endif
#include "compat/closefrom.h"
#include "compat/endian.h"
#include "compat/posix_spawn.h"
#include "compat/queue.h"
#include "compat/strtoi.h"

#include <signal.h>
#define sa_family_t __kernel_sa_family_t
#include <linux/rtnetlink.h>
