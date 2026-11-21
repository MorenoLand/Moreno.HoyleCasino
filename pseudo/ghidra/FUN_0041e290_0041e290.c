// FUN_0041e290  0041e290

undefined4 __thiscall FUN_0041e290(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar3;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  int local_20;
  int local_1c [5];
  undefined2 local_8;
  
  iVar1 = FUN_00462ba0(DAT_00790358 + 0x6c + param_2 * 10,5,0,param_1);
  local_8 = FUN_004262e0(4,4);
  if (1 < iVar1) {
    return 0;
  }
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    iVar1 = FUN_004630c0(DAT_00790358 + 0x6c + param_2 * 10,local_20,5);
    local_1c[local_20] = iVar1;
  }
  if ((local_1c[0] == 0xe) && (local_1c[1] == 0xd)) {
    iVar1 = FUN_00641280(local_8);
    if ((1 < iVar1) && (iVar1 = FUN_00641280(CONCAT22(extraout_var,local_8)), iVar1 < 0xd)) {
      uVar2 = FUN_00641280(CONCAT22(extraout_var_02,local_8),5);
      iVar1 = FUN_00463a40(DAT_00790358 + 0x6c + param_2 * 10,uVar2);
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar1 = FUN_00641280(local_8);
    uVar3 = extraout_var_00;
    if ((0xc < iVar1) &&
       ((iVar1 = FUN_00463a40(DAT_00790358 + 0x6c + param_2 * 10,0xb,5), iVar1 != 0 ||
        (iVar1 = FUN_00463a40(DAT_00790358 + 0x6c + param_2 * 10,0xc,5), uVar3 = extraout_var_01,
        iVar1 != 0)))) {
      return 0;
    }
    uVar2 = FUN_00641280(CONCAT22(uVar3,local_8),5);
    iVar1 = FUN_00463a40(DAT_00790358 + 0x6c + param_2 * 10,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00463a40(DAT_00790358 + 0x6c + param_2 * 10,0xc,5);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00641280(CONCAT22(extraout_var_03,local_8)), iVar1 < local_1c[3])) {
        return 0;
      }
    }
  }
  return 1;
}

