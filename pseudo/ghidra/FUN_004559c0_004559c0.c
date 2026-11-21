// FUN_004559c0  004559c0

short __thiscall FUN_004559c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_14 = 0xffffffff;
  local_8 = 0xffffffff;
  FUN_00451f60(&local_c,&local_18);
  iVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
  iVar3 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_18 * 2)));
  if (iVar2 == iVar3) {
    local_14 = local_c;
    local_8 = local_18;
    FUN_0044f840(local_c,local_18,param_2,param_3);
    return 0;
  }
  iVar2 = FUN_0044f700(4);
  if (((iVar2 == 2) || (iVar2 = FUN_0044f700(3), iVar2 == 2)) &&
     (iVar2 = FUN_0044f700(2), iVar2 == 2)) {
    local_14 = local_c;
    local_8 = local_18;
    FUN_0044f840(local_c,local_18,param_2,param_3);
    return 3;
  }
  sVar1 = FUN_00453e00(param_2,param_3);
  return sVar1 + 1;
}

