/* guest_pad.c: the host image owns 0x400000..0x1640000 so the loader cannot place the stack, the heap or
 * locale mappings there. The section is written by rt_load_image before the guest entry runs. */
#include <stdint.h>

char rt_guest_pad[0x1230000] __attribute__((section(".guest"), aligned(0x1000)));
