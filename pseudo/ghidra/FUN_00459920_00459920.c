// FUN_00459920  00459920

int __fastcall FUN_00459920(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int local_18 [5];
  
  local_18[0] = -1;
  local_18[1] = 1;
  local_18[2] = 2;
  local_18[3] = 3;
  local_18[4] = 0;
  if (*(char *)(DAT_00790738 + 0xe0 + *(int *)(param_1 + 0x194)) == '\0') {
    iVar2 = 0x35;
  }
  else {
    iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 400));
    if (iVar2 == 0xf) {
      iVar2 = 0x34;
    }
    else {
      iVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 400)));
      if (iVar2 == 0xe) {
        iVar2 = FUN_00641290(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 400)));
        iVar2 = local_18[iVar2] * 0xd;
      }
      else {
        iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 400));
        iVar1 = local_18[iVar2];
        iVar2 = FUN_00641280(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 400)));
        iVar2 = iVar1 * 0xd + -1 + iVar2;
      }
    }
  }
  return iVar2;
}

