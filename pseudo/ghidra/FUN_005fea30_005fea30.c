// FUN_005fea30  005fea30

void __thiscall FUN_005fea30(undefined4 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 extraout_var;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int local_1ec;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa768;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar8 = uVar1;
    FUN_005ec5a0(uVar1,param_1);
    local_8 = 0;
    uVar6 = CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    uVar5 = 0xffffffff;
    uVar2 = (**(code **)(*DAT_015e55e8 + 0x54))(0xffffffff,uVar6);
    FUN_005ecd00(uVar2,uVar5,uVar6);
    FUN_005ee5e0(param_2);
    FUN_005ef3e0();
    local_1ec = FUN_005ef050();
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      uVar7 = (uint)CONCAT12(DAT_0075ee1e,DAT_0075ee1c);
      uVar5 = 0xffffffff;
      uVar2 = (**(code **)(*DAT_015e55e8 + 0x54))(0xffffffff,uVar7);
      FUN_005ecd00(uVar2,uVar5,uVar7);
      FUN_005ee5e0(param_3);
      FUN_005ef3e0();
      iVar3 = FUN_005ef050();
      local_1ec = iVar3 + local_1ec;
    }
    FUN_005eaaf0();
    local_8._0_1_ = 1;
    uVar2 = (**(code **)(*DAT_015e55e8 + 100))();
    FUN_005eaf00(uVar2);
    FUN_005eacb0();
    iVar3 = FUN_005f5550();
    uVar2 = (**(code **)(*DAT_015e55e8 + 0x60))();
    FUN_005eaf00(uVar2);
    iVar4 = FUN_005f5550();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005eac00(uVar8,param_1,iVar4 + iVar3 + local_1ec);
    local_8 = 0xffffffff;
    FUN_005ec760();
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

