// FUN_004c5750  004c5750

undefined4 * __thiscall FUN_004c5750(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined4 local_48;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a2193;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PokerPlayer::vftable;
  param_1[1] = param_2;
  if (param_1[1] == -1) {
    param_1[0x1c] = 2;
    goto LAB_004c587e;
  }
  FUN_005dcb00(param_1[1]);
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 == 2) {
LAB_004c57f3:
    bVar1 = true;
  }
  else {
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 == 3) goto LAB_004c57f3;
    bVar1 = false;
  }
  if (bVar1) {
    param_1[0x1c] = 2;
  }
  FUN_005dcb00(param_1[1]);
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 == 1) {
    param_1[0x1c] = 1;
  }
  FUN_005dcb00(param_1[1]);
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 == 0) {
    param_1[0x1c] = 0;
  }
LAB_004c587e:
  param_1[0x1e] = 1;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x22] = 1;
  param_1[0x23] = 1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x1b] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_004c6b10();
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    param_1[local_14 + 0x12] = 0;
    param_1[local_14 + 0x14] = 0;
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    param_1[local_14 + 0x16] = 0;
  }
  pvVar3 = operator_new(0xea8);
  local_8._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_004c5730();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x10a] = local_48;
  *(undefined2 *)(param_1 + 0x19) = 0;
  local_18 = 0;
  while( true ) {
    iVar4 = FUN_0047f950();
    if (iVar4 <= local_18) break;
    FUN_004cea40(local_18);
    FUN_004d1230(CONCAT22(extraout_var_02,local_18));
    FUN_004d3e60(CONCAT22(extraout_var_06,local_18));
    FUN_004d6df0(CONCAT22(extraout_var,local_18));
    FUN_004ec1a0(CONCAT22(extraout_var_03,local_18));
    FUN_004d9180(CONCAT22(extraout_var_07,local_18));
    FUN_004e0510(CONCAT22(extraout_var_00,local_18));
    FUN_004e9e60(CONCAT22(extraout_var_04,local_18));
    FUN_004ee740(CONCAT22(extraout_var_08,local_18));
    FUN_004f0c00(CONCAT22(extraout_var_01,local_18));
    FUN_004f3110(CONCAT22(extraout_var_05,local_18));
    local_18 = local_18 + 1;
  }
  ExceptionList = local_10;
  return param_1;
}

