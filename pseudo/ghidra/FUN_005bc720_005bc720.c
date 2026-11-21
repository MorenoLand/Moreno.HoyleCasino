// FUN_005bc720  005bc720

int FUN_005bc720(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a810b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  while( true ) {
    if (*(int *)(&DAT_00758d20 + local_14 * 0x108) == 0) {
      return 0;
    }
    if (*(int *)(&DAT_00758d20 + local_14 * 0x108) == param_1) break;
    local_14 = local_14 + 1;
  }
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x70);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005bc7f0(uVar1);
  }
  *(undefined **)(local_24 + 0x50) = &DAT_00758d20 + local_14 * 0x108;
  ExceptionList = local_10;
  return local_24;
}

