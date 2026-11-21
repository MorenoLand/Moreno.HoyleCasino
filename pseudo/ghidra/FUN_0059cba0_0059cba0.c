// FUN_0059cba0  0059cba0

void FUN_0059cba0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 local_24;
  byte local_1e;
  undefined1 local_1d;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7562;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 == 1) || (param_1 == 2)) {
    local_1d = 1;
  }
  else {
    local_1d = 0;
  }
  if ((param_1 == 0) || (param_1 == 2)) {
    local_1e = 1;
  }
  else {
    local_1e = 0;
  }
  uVar2 = CONCAT31((int3)((uint)ExceptionList >> 8),local_1d);
  uVar5 = (uint)local_1e;
  uVar3 = FUN_005a2020(uVar5,uVar2,DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_005a2a40(uVar3,uVar5,uVar2);
  if (cVar1 == '\0') {
    FUN_0059b800();
    pvVar4 = operator_new(0x24);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = CPrintDialog(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_24);
  }
  ExceptionList = local_10;
  return;
}

