// FUN_00624f10  00624f10

void __fastcall FUN_00624f10(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  __time64_t _Var4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab431;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00795fb5 = 0;
  pvVar2 = operator_new(0x3fc);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    _Var4 = _time64((__time64_t *)0x0);
    local_38 = (undefined4)_Var4;
    local_40 = FUN_006145e0(local_38);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = local_40;
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    uVar3 = FUN_0062fbf0(1000000000);
    FUN_00614670(uVar3);
  }
  pvVar2 = operator_new(0x20);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_0062a870(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = local_44;
  pvVar2 = operator_new(0x4c);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_006033f0(0);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = local_48;
  uVar3 = FID_conflict__Immortalize<std::_Generic_error_category>();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  ExceptionList = local_10;
  return;
}

