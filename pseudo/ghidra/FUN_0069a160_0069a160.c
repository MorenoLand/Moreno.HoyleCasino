// FUN_0069a160  0069a160

int FUN_0069a160(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = *param_4;
  param_3 = param_3 / iVar1;
  local_4 = 0;
  if (0 < param_3) {
    do {
      uVar2 = FUN_0069a1c0(param_4,param_2);
      iVar3 = FUN_006951e0(param_4,uVar2,param_1);
      local_4 = local_4 + iVar3;
      param_2 = param_2 + iVar1 * 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return local_4;
  }
  return 0;
}

