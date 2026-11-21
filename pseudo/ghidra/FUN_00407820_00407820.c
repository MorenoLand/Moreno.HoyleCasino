// FUN_00407820  00407820

void __fastcall FUN_00407820(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d947;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10d8) == 0) {
    pvVar2 = operator_new(0x810);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 0x10d8) = local_34;
  }
  local_8 = 0xffffffff;
  FUN_00642e70(4);
  FUN_004077d0(uVar1);
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0xf4);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_00409850();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_14 * 4) = local_38;
    FUN_005f53e0(local_14);
    uVar3 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x34 + local_14 * 8) = (int)uVar3;
    *(int *)(param_1 + 0x38 + local_14 * 8) = (int)((ulonglong)uVar3 >> 0x20);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    FUN_004073b0();
  }
  FUN_004079b0();
  ExceptionList = local_10;
  return;
}

