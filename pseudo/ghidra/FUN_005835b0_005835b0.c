// FUN_005835b0  005835b0

void __fastcall FUN_005835b0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6c22;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00793580 == 0) {
    pvVar2 = operator_new(0x58);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_00582f40();
    }
    DAT_00793580 = local_28;
  }
  local_8 = 0xffffffff;
  FUN_00583010(uVar1);
  if (*(int *)(param_1 + 0x84) == 0) {
    pvVar2 = operator_new(0x20c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_0057d600();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84) = local_2c;
  }
  FUN_0057e3d0();
  ExceptionList = local_10;
  return;
}

