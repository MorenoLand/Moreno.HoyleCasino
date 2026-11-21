// FUN_005fc850  005fc850

undefined4 * __thiscall FUN_005fc850(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa5cb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00603120(0,0,0);
  local_8 = 0;
  *param_1 = sciMenuItem::vftable;
  param_1[0x7a] = param_2;
  param_1[0x7c] = param_3;
  param_1[1] = param_3;
  param_1[0x7b] = 0xffffffff;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = (**(code **)(*DAT_015e55e8 + 0x44))(0,0,uVar1);
  FUN_00603190(uVar2,uVar3,uVar4);
  ExceptionList = local_10;
  return param_1;
}

