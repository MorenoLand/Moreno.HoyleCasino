// FUN_005984f0  005984f0

void __fastcall FUN_005984f0(int param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7459;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    pvVar1 = operator_new(0x810);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_00642e10();
    }
    *(undefined4 *)(param_1 + 4) = local_40;
  }
  local_8 = 0xffffffff;
  FUN_00642e70(0);
  FUN_006437d0(1,0);
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    pvVar1 = operator_new(0xf0);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_00599bb0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_44;
    FUN_005f53e0(local_14);
    uVar2 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0x38 + local_14 * 8) = (int)uVar2;
    *(int *)(param_1 + 0x3c + local_14 * 8) = (int)((ulonglong)uVar2 >> 0x20);
  }
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005dcb00(local_18,uVar2);
    FUN_005d6050(uVar2);
  }
  FUN_00599210();
  *(undefined1 *)(param_1 + 0x116) = 0;
  ExceptionList = local_10;
  return;
}

