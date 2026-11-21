// FUN_00527d40  00527d40

void __fastcall FUN_00527d40(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4231;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 0xa1; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0xf4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005297d0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_14 * 4) = local_2c;
    FUN_005f53e0(local_14);
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    uVar3 = FUN_0064c8a0(0,0);
    FUN_005dcb00(local_14,uVar3);
    FUN_005d6050(uVar3);
  }
  FUN_00527e50(uVar1);
  ExceptionList = local_10;
  return;
}

