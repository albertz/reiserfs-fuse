#define GRUB_UTIL 1
#define _FILE_OFFSET_BITS 64

#define HAVE_WORKING_O_NOFOLLOW 1
#define HAVE_DECL_FWRITE_UNLOCKED 0
#define HAVE_DECL_FPUTS_UNLOCKED 0
#define __getopt_argv_const const
#define _GL_UNUSED

#if defined(__i386__)
#define NESTED_FUNC_ATTR __attribute__ ((__regparm__ (1)))
#else
#define NESTED_FUNC_ATTR
#endif

#if defined(__i386__)
#define SIZEOF_LONG 4
#define SIZEOF_VOID_P 4
#elif defined(__x86_64__)
#define SIZEOF_LONG 8
#define SIZEOF_VOID_P 8
#else
#error "unknown arch"
#endif

#define GRUB_TARGET_SIZEOF_VOID_P SIZEOF_VOID_P

#define grub_printf printf
#define grub_malloc malloc
#define grub_free free
#define grub_memcmp memcmp
#define grub_strcmp strcmp
#define grub_memcpy memcpy
