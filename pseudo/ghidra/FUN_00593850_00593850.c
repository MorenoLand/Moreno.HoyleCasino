// FUN_00593850  00593850

int __thiscall FUN_00593850(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  iVar1 = FUN_00641280(param_2,param_1);
  iVar2 = FUN_00641290(CONCAT22(extraout_var,param_2));
  if (iVar1 == 0xe) {
    iVar1 = local_18[iVar2] * 0xd;
  }
  else {
    iVar1 = local_18[iVar2] * 0xd + -1 + iVar1;
  }
  return iVar1;
}

