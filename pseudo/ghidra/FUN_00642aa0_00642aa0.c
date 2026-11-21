// FUN_00642aa0  00642aa0

bool FUN_00642aa0(short param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  int local_20 [5];
  int local_c;
  int local_8;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_00641290(param_1);
    uVar4 = extraout_var;
    if ((iVar2 != 5) && (iVar2 = FUN_00641290(param_2), uVar4 = extraout_var_00, iVar2 != 5)) {
      iVar2 = FUN_00641290(param_1);
      if (iVar2 == 6) {
        return true;
      }
      iVar2 = FUN_00641290(CONCAT22(extraout_var_02,param_2));
      if (iVar2 == 6) {
        return false;
      }
      local_20[param_3] = 4;
      local_20[param_4] = 3;
      local_20[param_5] = 2;
      local_20[param_6] = 1;
      local_20[0] = 0;
      iVar2 = FUN_00641290(param_1);
      local_c = local_20[iVar2];
      iVar2 = FUN_00641290(CONCAT22(extraout_var_05,param_2));
      local_8 = local_20[iVar2];
      if (local_8 < local_c) {
        return true;
      }
      if (local_c < local_8) {
        return false;
      }
      iVar2 = FUN_00641280(CONCAT22((short)((uint)local_8 >> 0x10),param_1));
      iVar3 = FUN_00641280(CONCAT22(extraout_var_03,param_2));
      return iVar3 < iVar2;
    }
    iVar2 = FUN_00641290(CONCAT22(uVar4,param_2));
    if (iVar2 == 5) {
      iVar2 = FUN_00641290(CONCAT22(extraout_var_04,param_1));
      if (iVar2 == 5) {
        iVar2 = FUN_00641280(param_1);
        iVar3 = FUN_00641280(CONCAT22(extraout_var_01,param_2));
        bVar1 = iVar3 < iVar2;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

