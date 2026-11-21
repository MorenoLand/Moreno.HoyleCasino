// FUN_00588a80  00588a80

int __fastcall FUN_00588a80(int param_1)

{
  int iVar1;
  int iVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(DAT_007947e0 + 0x98);
  local_8 = 0;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x3c04); local_c = local_c + 1) {
    local_10 = 0;
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      iVar2 = *(int *)(param_1 + local_c * 0xe10 + 0x344 + local_18 * 0x24);
      local_34 = iVar2 + -1 + (int)*(char *)(param_1 + local_c * 0xe10 + 0x32a + local_18 * 0x24);
      if ((((*(char *)(param_1 + local_c * 0xe10 + 0x32c + local_18 * 0x24) == '\0') && (iVar2 != 0)
           ) && (iVar2 <= iVar1)) && (iVar1 <= local_34)) {
        if (local_34 < local_10) {
          local_34 = local_10;
        }
        local_10 = local_34;
      }
    }
    if (local_10 < local_8) {
      local_38 = local_8;
    }
    else {
      local_38 = local_10;
    }
    local_8 = local_38;
  }
  if (local_8 == 0) {
    FUN_0062fde0("Games to play to resolve all open tickets: 0\n");
    local_3c = 0;
  }
  else {
    local_3c = (local_8 - iVar1) + 1;
    if (100 < local_3c) {
      FUN_005e9f20("totGamesToPlay <= 100","..\\Casino\\kenoticketdialog.cpp",0x32f);
    }
    if (99 < local_3c) {
      local_3c = 100;
    }
    FUN_0062fde0("Games to play to resolve all open tickets:%d \n",local_3c);
  }
  return local_3c;
}

