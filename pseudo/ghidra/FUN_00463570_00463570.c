// FUN_00463570  00463570

void FUN_00463570(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                 int param_7,int param_8)

{
  undefined2 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined2 extraout_var_00;
  int local_8;
  
  for (local_8 = 0; local_8 < param_7; local_8 = local_8 + 1) {
    uVar3 = FUN_00641290(CONCAT22((short)((uint)local_8 >> 0x10),
                                  *(undefined2 *)(param_1 + local_8 * 2)));
    uVar3 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + local_8 * 2)),uVar3);
    cVar2 = FUN_00642430(param_2,param_3,uVar3);
    if (cVar2 != '\0') {
      FUN_00642210(param_2,param_3,*(undefined2 *)(param_1 + local_8 * 2));
      param_3 = param_3 + -1;
    }
  }
  if (param_7 <= param_3) {
    if (param_7 < param_3) {
      for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
        if (param_8 <= local_8) {
          uVar1 = *(undefined2 *)(param_2 + local_8 * 2);
          FUN_00642210(param_2,param_3,
                       CONCAT22((short)((uint)local_8 >> 0x10),
                                *(undefined2 *)(param_2 + local_8 * 2)));
          FUN_00463570(param_1,param_2,param_3 + -1,param_4,param_5,param_6,param_7,local_8);
          FUN_00642130(param_2,param_3,CONCAT22(extraout_var,uVar1),local_8);
        }
      }
    }
    else {
      iVar4 = FUN_00462da0(param_1,param_2,param_7);
      if (iVar4 == 0) {
        *param_5 = *param_5 + 1;
      }
      else if (iVar4 == 1) {
        *param_4 = *param_4 + 1;
      }
      else if (iVar4 == 2) {
        *param_6 = *param_6 + 1;
      }
    }
  }
  return;
}

