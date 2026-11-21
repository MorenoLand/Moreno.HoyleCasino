// FUN_00680fd0  00680fd0

undefined4 FUN_00680fd0(void)

{
  int iVar1;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (DAT_0162ee84 != (int *)0x0) {
    (**(code **)(*DAT_0162ee84 + 0x94))();
    local_5 = (**(code **)(*DAT_0162ee84 + 0x98))();
    if (DAT_0162ee84 != (int *)0x0) {
      (**(code **)*DAT_0162ee84)(1);
    }
  }
  if (DAT_007960d8 != (int *)0x0) {
    if (DAT_0163184c != '\0') {
      (**(code **)(*DAT_007960d8 + 0xc))();
      FUN_006664f0();
    }
    if (DAT_007960d8 != (int *)0x0) {
      (**(code **)*DAT_007960d8)(1);
    }
  }
  if (local_5 != '\0') {
    FUN_005e9f00(500);
    FUN_0062fde0("Maximum Objects Allocated from Blocks  -- %i\r\n",DAT_01630bc0);
    for (local_c = 0; local_c < 0x1a; local_c = local_c + 1) {
      FUN_0062fde0("%3i\t--\tRequests %5i\tMaxObjs %5i\r\n",local_c,
                   *(undefined4 *)(&DAT_01631078 + local_c * 4),
                   *(undefined4 *)(&DAT_01630bc8 + local_c * 4));
    }
    for (; local_c < DAT_0078142c; local_c = local_c + 1) {
      FUN_0062fde0("%3i\t--\tRequests %5i\r\n",local_c,*(undefined4 *)(&DAT_01631078 + local_c * 4))
      ;
    }
    FUN_005e9f00(500);
    FUN_0062fde0("***MEMORY LEAKS***\r\n");
    for (local_10 = 0; local_10 < DAT_01631848; local_10 = local_10 + 1) {
      local_14 = *(int **)(&DAT_0163152c + local_10 * 8);
      iVar1 = *(int *)(&DAT_01631528 + local_10 * 8);
      for (local_c = 0; local_c < (int)(0x10000 / (longlong)iVar1); local_c = local_c + 1) {
        if (*local_14 == -0x55555556) {
          local_18 = local_14;
          if (local_14[1] == -0x54325433) {
            do {
              local_18 = local_18 + 1;
            } while (*local_18 != -0x55555556);
          }
          FUN_0062fde0("Memory Leak:\tAllocNumber %5i\tSize %5i\tPtr 0x%lx\tBase 0x%lx\r\n",
                       (short)local_18[1],local_18[2],local_18 + 4,local_18[3]);
        }
        local_14 = (int *)((int)local_14 + *(int *)(&DAT_01631528 + local_10 * 8));
      }
    }
    FUN_005e9f00(500);
  }
  return 1;
}

