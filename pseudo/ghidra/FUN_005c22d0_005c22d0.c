// FUN_005c22d0  005c22d0

undefined4 * FUN_005c22d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *extraout_var;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a85b3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005c0a00(uVar1);
  local_8 = 0;
  *extraout_var = MLVSlotDisplay_Scroller::vftable;
  puVar4 = extraout_var + 0x16;
  local_18 = &local_19;
  puVar3 = extraout_var;
  FUN_005c68b0(0);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3[0x14] = &DAT_00759948;
  puVar3[0x15] = 0;
  uVar2 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))(uVar1,puVar3,puVar4);
  puVar3[0x1a] = uVar2;
  ExceptionList = local_10;
  return puVar3;
}

