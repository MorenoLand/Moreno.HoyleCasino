// FUN_0061efc0  0061efc0

void __fastcall FUN_0061efc0(int param_1)

{
  undefined4 uVar1;
  char local_384 [312];
  char local_24c [312];
  undefined1 local_114 [268];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_114[0] = 0;
  uVar1 = FUN_0061e6c0(local_114);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (DAT_00795fb2 != '\0') {
      sprintf(local_384,"Resource %d.%c%c%c%c not found!  ",*(undefined4 *)(param_1 + 0x34),
              *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
              *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
      FUN_0062fde0(local_384);
    }
  }
  else {
    uVar1 = FUN_005e9fd0(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x14c) = uVar1;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined1 *)(param_1 + 0x154) = 1;
    if (DAT_00795fb2 != '\0') {
      sprintf(local_24c,"Resource %s found.  ",local_114);
      FUN_0062fde0(local_24c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

