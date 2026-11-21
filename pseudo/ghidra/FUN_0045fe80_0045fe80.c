// FUN_0045fe80  0045fe80

void __fastcall FUN_0045fe80(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f3ac;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x58) == 0) {
    pvVar2 = operator_new(0x810);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 0x58) = local_3c;
  }
  local_8 = 0xffffffff;
  FUN_00642e70(7);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    uVar3 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 8 + local_14 * 0x10) = (int)uVar3;
    *(int *)(param_1 + 0xc + local_14 * 0x10) = (int)((ulonglong)uVar3 >> 0x20);
    uVar3 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x10 + local_14 * 0x10) = (int)uVar3;
    *(int *)(param_1 + 0x14 + local_14 * 0x10) = (int)((ulonglong)uVar3 >> 0x20);
  }
  pvVar2 = operator_new(0xf0);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_004621e0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_40;
  FUN_0045ffe0();
  *(undefined1 *)(param_1 + 0x116) = 0;
  ExceptionList = local_10;
  return;
}

