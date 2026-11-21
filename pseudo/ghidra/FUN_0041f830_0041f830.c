// FUN_0041f830  0041f830

int FUN_0041f830(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  if ((*(char *)(DAT_00790358 + param_1 + 0xa9) == '\0') && ((param_1 != 4 || (param_3 != 4)))) {
    iVar2 = 0x35;
  }
  else {
    iVar2 = FUN_00641280(CONCAT22((short)((uint)(DAT_00790358 + param_1) >> 0x10),param_2));
    if (iVar2 == 0xe) {
      iVar2 = FUN_00641290(CONCAT22(extraout_var,param_2));
      iVar2 = local_18[iVar2] * 0xd;
    }
    else {
      iVar2 = FUN_00641290(CONCAT22(extraout_var_00,param_2));
      iVar1 = local_18[iVar2];
      iVar2 = FUN_00641280(param_2);
      iVar2 = iVar1 * 0xd + -1 + iVar2;
    }
  }
  return iVar2;
}

