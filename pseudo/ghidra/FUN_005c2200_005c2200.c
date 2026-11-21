// FUN_005c2200  005c2200

int FUN_005c2200(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8585;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  while( true ) {
    if (*(int *)(&DAT_00759948 + local_14 * 0x10c) == 0) {
      return 0;
    }
    if (*(int *)(&DAT_00759948 + local_14 * 0x10c) == param_1) break;
    local_14 = local_14 + 1;
  }
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x6c);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005c22d0(uVar1);
  }
  *(undefined **)(local_24 + 0x50) = &DAT_00759948 + local_14 * 0x10c;
  ExceptionList = local_10;
  return local_24;
}

