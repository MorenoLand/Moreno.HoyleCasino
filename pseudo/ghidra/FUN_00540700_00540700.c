// FUN_00540700  00540700

void __fastcall FUN_00540700(int param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4e49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    pvVar1 = operator_new(0x810);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 4) = local_3c;
  }
  local_8 = 0xffffffff;
  FUN_00642e70(0);
  FUN_006437d0(1,0);
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0xf0);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_00542020();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_40;
    FUN_005f53e0(local_14);
    uVar2 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x38 + local_14 * 8) = (int)uVar2;
    *(int *)(param_1 + 0x3c + local_14 * 8) = (int)((ulonglong)uVar2 >> 0x20);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005dcb00(local_14,uVar2);
    FUN_005d6050(uVar2);
  }
  FUN_005408b0();
  *(undefined1 *)(param_1 + 0xfa) = 0;
  ExceptionList = local_10;
  return;
}

