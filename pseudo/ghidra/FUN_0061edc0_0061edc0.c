// FUN_0061edc0  0061edc0

void __fastcall FUN_0061edc0(int param_1)

{
  undefined4 uVar1;
  char local_21c [264];
  char local_114 [264];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  local_8 = FUN_0062ac30();
  *(undefined1 *)(param_1 + 0x154) = 0;
  while (local_8 != 0) {
    uVar1 = FUN_0062b430(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                         param_1 + 0x140,param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x13c) = uVar1;
    if (*(int *)(param_1 + 0x13c) == 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
      local_8 = FUN_0062ace0();
      if ((DAT_007960d8 != 0) && (*(int *)(DAT_007960d8 + 8) != 0)) {
        FUN_0060acc0();
      }
    }
    else {
      if (DAT_00795fb2 != '\0') {
        sprintf(local_114,"Resource %d.%c%c%c%c found in %s",*(undefined4 *)(param_1 + 0x34),
                *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
                *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18,local_8 + 0x19);
        FUN_0062fde0(local_114);
      }
      local_8 = 0;
    }
  }
  if ((*(int *)(param_1 + 0x13c) == 0) && (DAT_00795fb2 != '\0')) {
    sprintf(local_21c,"Resource %d.%c%c%c%c not found in .prf!",*(undefined4 *)(param_1 + 0x34),
            *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
            *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
    FUN_0062fde0(local_21c);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

