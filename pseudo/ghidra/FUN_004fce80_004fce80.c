// FUN_004fce80  004fce80

void FUN_004fce80(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2856;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004fa2e0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_004fb580();
  pvVar2 = operator_new(0x208);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_00467090();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(DAT_00791eb8 + 0x9c) = local_28;
  FUN_005198c0(0x154,0xdc);
  FUN_005f87d0();
  (**(code **)(**(int **)(DAT_00791eb8 + 0x9c) + 0x3c))();
  pvVar2 = operator_new(0x22c);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_0046a260();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(DAT_00791eb8 + 0xa0) = local_2c;
  FUN_005f83d0(0x186ab,0);
  FUN_005f7340(0,0x14);
  FUN_005f87d0();
  (**(code **)(**(int **)(DAT_00791eb8 + 0xa0) + 0x3c))();
  cVar1 = FUN_005da7b0();
  if (cVar1 != '\0') {
    FUN_004fc6a0();
  }
  ExceptionList = local_10;
  return;
}

