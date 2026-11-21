// FUN_0061dff0  0061dff0

void __thiscall FUN_0061dff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char local_324 [264];
  char local_21c [264];
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  memset((void *)(param_1 + 8),0,0x28);
  if (param_3 != -1) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_1 + 0x154) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0;
  if (param_2 == 0) {
    if (DAT_007960d8 == 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(DAT_007960d8 + 0x18);
    }
  }
  else {
    *(int *)(param_1 + 0x150) = param_2;
  }
  if ((*(int *)(param_1 + 0x34) != 0) ||
     (iVar1 = strcmp((char *)(param_1 + 0x38),(char *)&PTR_006b27f8), iVar1 != 0)) {
    if ((DAT_007960d8 != 0) && (*(int *)(DAT_007960d8 + 8) != 0)) {
      FUN_0060acc0();
    }
    if (param_3 == 0) {
      if (DAT_00795fb3 == '\0') {
        FUN_0061efc0();
      }
      if (*(int *)(param_1 + 0x13c) == 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
          if (DAT_00795fb3 != '\0') {
            sprintf(local_21c,"Cannot Find Resource %s.%c%c%c%c while looking in Prfs only!",
                    param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                    *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
            FUN_0062fde0(local_21c);
          }
        }
        else {
          FUN_0061edc0();
        }
      }
      if (DAT_00795fb2 != '\0') {
        FUN_0062fde0(&DAT_006d8c14);
      }
    }
    else if (param_3 == 1) {
      if (DAT_00795fb3 == '\0') {
        FUN_0061ebd0();
      }
      if (*(int *)(param_1 + 0x158) == 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
          if (DAT_00795fb3 != '\0') {
            sprintf(local_114,"Cannot Find Resource %s.%c%c%c%c while looking in Prfs only!",
                    param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                    *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
            FUN_0062fde0(local_114);
          }
        }
        else {
          FUN_0061e4f0();
        }
      }
      if (DAT_00795fb2 != '\0') {
        FUN_0062fde0(&DAT_006d8c14);
      }
    }
    if ((DAT_00795fb2 == '\0') &&
       (((param_3 != 0 && (*(int *)(param_1 + 0x158) == 0)) ||
        ((param_3 == 0 && (*(int *)(param_1 + 0x13c) == 0)))))) {
      if (*(int *)(param_1 + 0x34) == 0) {
        sprintf(local_324,"Resource %s.%c%c%c%c failed to load!\r\n",param_1 + 0x38,
                *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
      }
      else {
        sprintf(local_324,"Resource %d.%c%c%c%c failed to load!\r\n",*(undefined4 *)(param_1 + 0x34)
                ,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
      }
      FUN_0062fde0(local_324);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

