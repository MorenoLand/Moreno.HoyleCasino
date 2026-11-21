// FUN_0066b820  0066b820

undefined4 * __fastcall FUN_0066b820(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acdf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064cbe0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = MainScreenRoom::vftable;
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x27c))();
  FUN_005f1ad0(uVar1);
  FUN_005f38b0(0);
  DAT_016306c0 = param_1;
  uVar2 = (**(code **)(*DAT_0162ee84 + 0x25c))();
  pvVar3 = operator_new(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar2 * 4));
  param_1[0x17] = pvVar3;
  local_14 = 0;
  while( true ) {
    iVar4 = (**(code **)(*DAT_0162ee84 + 0x25c))();
    if (iVar4 <= local_14) break;
    *(undefined4 *)(param_1[0x17] + local_14 * 4) = 0;
    local_14 = local_14 + 1;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  ExceptionList = local_10;
  return param_1;
}

