// FUN_00591070  00591070

int FUN_00591070(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  cVar2 = FUN_005997a0(param_1);
  if ((cVar2 == '\0') && ((param_1 != 4 || (param_3 != 5)))) {
    iVar3 = 0x35;
  }
  else {
    iVar3 = FUN_00641280(CONCAT22(extraout_var_00,param_2));
    if (iVar3 == 0xe) {
      iVar3 = FUN_00641290(param_2);
      iVar3 = local_18[iVar3] * 0xd;
    }
    else {
      iVar3 = FUN_00641290(CONCAT22(extraout_var,param_2));
      iVar1 = local_18[iVar3];
      iVar3 = FUN_00641280(CONCAT22(extraout_var_01,param_2));
      iVar3 = iVar1 * 0xd + -1 + iVar3;
    }
  }
  return iVar3;
}

