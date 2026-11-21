// FUN_0051ae40  0051ae40

void FUN_0051ae40(void)

{
  undefined4 uVar1;
  int *piVar2;
  char local_114 [256];
  uint local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(DAT_00791eb8 + 0xa4) + 0x3e4 + local_10 * 4) != -1) {
      local_c = local_c + 1;
    }
  }
  if (local_c < 6) {
    FUN_0047ffe0();
  }
  for (local_10 = 6; -1 < local_10; local_10 = local_10 + -1) {
    if (*(int *)(*(int *)(DAT_00791eb8 + 0xa4) + 0x3e4 + local_10 * 4) != -1) {
      local_8 = FUN_0047e390(*(undefined4 *)(*(int *)(DAT_00791eb8 + 0xa4) + 0x3e4 + local_10 * 4));
      uVar1 = FUN_004c6150();
      sprintf(local_114,"%s",uVar1);
      piVar2 = (int *)FUN_005fb550(0x17 - local_10);
      (**(code **)(*piVar2 + 0xb4))(local_114);
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

