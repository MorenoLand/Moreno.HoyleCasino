// FUN_0050c830  0050c830

void FUN_0050c830(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 local_10;
  undefined2 local_c;
  undefined2 local_8;
  
  DAT_007926f8 = FUN_0047e390(param_1);
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined1 *)(param_2 + local_8) = 0;
  }
  iVar1 = FUN_0062fbf0(7);
  *(undefined1 *)(param_2 + iVar1) = 1;
  local_c = FUN_0062fbf0(7);
  while (*(char *)(param_2 + local_c) != '\0') {
    local_c = FUN_0062fbf0(7);
  }
  *(undefined1 *)(param_2 + local_c) = 1;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    if (*(char *)(param_2 + local_8) == '\0') {
      *(undefined2 *)(param_3 + local_8 * 2) = 0xfffe;
    }
    else {
      *(undefined2 *)(param_3 + local_8 * 2) = 0xffff;
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    local_10 = FUN_0062fbf0(7);
    while (*(short *)(param_3 + local_10 * 2) != -2) {
      local_10 = FUN_0062fbf0(7);
    }
    *(short *)(param_3 + local_10 * 2) = local_8;
  }
  return;
}

