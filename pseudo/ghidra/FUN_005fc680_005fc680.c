// FUN_005fc680  005fc680

undefined4 * __thiscall FUN_005fc680(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa5a8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00603120(0,0,0);
  local_8 = 0;
  *param_1 = sciMenuButton::vftable;
  param_1[0x7b] = param_2;
  param_1[0x7a] = param_3;
  uVar2 = (**(code **)(*DAT_015e55e8 + 0x40))(uVar1);
  uVar3 = (**(code **)(*DAT_015e55e8 + 0x3c))(uVar2);
  uVar4 = (**(code **)(*DAT_015e55e8 + 0x44))(uVar3);
  FUN_00603190(uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return param_1;
}

