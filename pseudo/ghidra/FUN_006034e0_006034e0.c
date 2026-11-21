// FUN_006034e0  006034e0

void __fastcall FUN_006034e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006aa997;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ResourceManager::vftable;
  local_8 = 2;
  if (param_1[0x12] != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  FUN_0062ab60(param_1);
  local_14 = (undefined4 *)FUN_0062ac30(uVar1);
  while (local_14 != (undefined4 *)0x0) {
    FUN_0062ab60(local_14);
    if ((undefined4 *)local_14[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)local_14[2])(1);
    }
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
    local_14 = (undefined4 *)FUN_0062ac30();
  }
  local_18 = (undefined4 *)FUN_0062ac30(uVar1);
  while (local_18 != (undefined4 *)0x0) {
    FUN_0062ab60(local_18);
    if (local_18 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)*local_18)(1);
    }
    local_18 = (undefined4 *)FUN_0062ac30(uVar1,uVar2);
  }
  local_8._0_1_ = 1;
  FUN_0062a900();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0062a900();
  local_8 = 0xffffffff;
  FUN_0062aef0();
  ExceptionList = local_10;
  return;
}

