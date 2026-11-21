// FUN_0062ccf0  0062ccf0

/* WARNING: Removing unreachable block (ram,0x0062cd0a) */

int FUN_0062ccf0(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_3c;
  int local_38;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_3c = param_3;
  local_38 = param_4;
  local_30 = param_1;
  local_2c = *param_2;
  if (local_2c == *param_2) {
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_006818d0(&local_3c,"1.2.3",0x38);
    if (iVar1 == 0) {
      iVar1 = FUN_00681a00(&local_3c,2);
      if (iVar1 == 1) {
        *param_2 = local_28;
        iVar1 = FUN_00682ff0(&local_3c);
      }
      else {
        FUN_00682ff0(&local_3c);
        if ((iVar1 == 2) || ((iVar1 == -5 && (local_38 == 0)))) {
          iVar1 = -3;
        }
      }
    }
  }
  else {
    iVar1 = -5;
  }
  return iVar1;
}

