// FUN_00451c20  00451c20

undefined4 __thiscall
FUN_00451c20(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)(param_1 + 0x2ce) == '\0') || (*(char *)(param_1 + 0x2c2) == '\0')) {
    uVar1 = 0;
  }
  else {
    *param_5 = -1;
    *param_6 = -1;
    if (*(int *)(param_1 + 0x2d4) == 6) {
      *param_5 = param_3;
      *param_6 = param_4;
      uVar1 = 1;
    }
    else if (*(char *)(param_1 + 0x2ca) == '\0') {
      if ((*(char *)(param_1 + 0x2be) == '\0') ||
         ((*(char *)(param_1 + 0x2be) != '\0' && (*(int *)(param_1 + 0x2d4) == 4)))) {
        iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + param_3 * 2));
        if ((iVar2 == *(int *)(param_1 + 0x2d0)) ||
           (((iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + param_3 * 2)), iVar2 == -1 ||
             (iVar2 = FUN_0044f6c0(CONCAT22(extraout_var_02,
                                            *(undefined2 *)(param_1 + 4 + param_4 * 2))),
             iVar2 == *(int *)(param_1 + 0x2d0))) ||
            (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + param_4 * 2)), iVar2 == -1)))) {
          uVar1 = 0;
        }
        else {
          *param_5 = param_3;
          *param_6 = param_4;
          uVar1 = 1;
        }
      }
      else if (param_2 == 0xe) {
        iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + param_3 * 2));
        if ((iVar2 == *(int *)(param_1 + 0x2d0)) ||
           (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + param_4 * 2)),
           iVar2 == *(int *)(param_1 + 0x2d0))) {
          uVar1 = 0;
        }
        else {
          *param_5 = param_3;
          *param_6 = param_4;
          uVar1 = 1;
        }
      }
      else {
        *param_5 = param_3;
        *param_6 = param_4;
        uVar1 = 1;
      }
    }
    else {
      if (param_2 == 0xe) {
        if (((*(char *)(param_1 + 0x2be) != '\0') && (*(int *)(param_1 + 0x2d4) == 4)) &&
           ((iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4)), iVar2 == *(int *)(param_1 + 0x2d0)
            || ((iVar2 = FUN_0044f6c0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 6))),
                iVar2 == *(int *)(param_1 + 0x2d0) ||
                (iVar2 = FUN_0044f6c0(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 8))),
                iVar2 == *(int *)(param_1 + 0x2d0))))))) {
          return 0;
        }
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          if (iVar2 != -1) {
            if (*param_5 != -1) {
              *param_6 = local_8;
              return 1;
            }
            *param_5 = local_8;
          }
        }
      }
      else {
        for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
          uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          iVar2 = FUN_0044f700(uVar1);
          if (iVar2 == 3) {
            iVar2 = FUN_0044f6c0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
            if (iVar2 == *(int *)(param_1 + 0x2d0)) {
              local_10 = local_8 + 2;
            }
            else {
              local_10 = local_8;
            }
            *param_5 = local_10;
            iVar2 = FUN_0044f6c0(CONCAT22((short)((uint)local_10 >> 0x10),
                                          *(undefined2 *)(param_1 + 6 + local_8 * 2)));
            if (iVar2 == *(int *)(param_1 + 0x2d0)) {
              local_14 = local_8 + 2;
            }
            else {
              local_14 = local_8 + 1;
            }
            *param_6 = local_14;
            return 1;
          }
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

