// FUN_005685c0  005685c0

void __fastcall FUN_005685c0(int param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5c89;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar3 = operator_new(0x810);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 0x10) = local_2c;
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_005687e0(uVar2);
  FUN_00642e70(-(cVar1 != '\0') & 8);
  if (*(int *)(param_1 + 0x34) == 0) {
    pvVar3 = operator_new(0x3b8);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_0056a6e0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = local_30;
  }
  FUN_0056a800();
  FUN_00568450(1);
  FUN_0056a9c0();
  FUN_0056aa50();
  FUN_005687b0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    *(undefined2 *)(param_1 + 0x1a + local_14 * 2) = 0;
    *(undefined2 *)(param_1 + 0x24 + local_14 * 2) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_0057ab80(7,&DAT_00745460);
  FUN_005f2ba0(0x1391);
  ExceptionList = local_10;
  return;
}

