// FUN_00450e70  00450e70

void __thiscall FUN_00450e70(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x2c5) != '\0') {
    *param_2 = -1;
    *param_3 = -1;
    if (((*(int *)(param_1 + 0x2d8) == 1) && (*(int *)(param_1 + 0x2fc) != 1)) ||
       ((*(int *)(param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4) == 0xe &&
        (*(int *)(param_1 + 0x2fc) != 0xe)))) {
      if (*(char *)(param_1 + 0x2be) == '\0') {
        iVar2 = FUN_0044f700(0xe);
        if (iVar2 == 2) {
          *param_2 = 0;
        }
        iVar2 = FUN_0044f700(0xe);
        if (iVar2 == 3) {
          *param_2 = 0;
          *param_3 = 1;
        }
      }
      else {
        iVar2 = FUN_0044f700(0xe);
        if (iVar2 == 3) {
          for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
            iVar2 = FUN_0044f6c0(CONCAT22((short)((uint)local_8 >> 0x10),
                                          *(undefined2 *)(param_1 + 4 + local_8 * 2)));
            if (iVar2 != -1) {
              *param_2 = local_8;
              break;
            }
          }
        }
        iVar2 = FUN_0044f700(0xe);
        if (iVar2 == 4) {
          for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
            iVar2 = FUN_0044f6c0(CONCAT22((short)((uint)local_8 >> 0x10),
                                          *(undefined2 *)(param_1 + 4 + local_8 * 2)));
            if (iVar2 != -1) {
              if (*param_2 != -1) {
                *param_3 = local_8;
                return;
              }
              *param_2 = local_8;
            }
          }
        }
      }
    }
    else {
      for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
        iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        if ((iVar2 == 0xe) &&
           (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar2 != -1)) {
          if (*param_2 != -1) {
            *param_3 = local_8;
            return;
          }
          *param_2 = local_8;
        }
      }
    }
    for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
      iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if ((iVar2 != 0xe) &&
         (iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2)),
         *(int *)(param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4) < iVar2)) {
        if (*param_2 != -1) {
          *param_3 = local_8;
          return;
        }
        *param_2 = local_8;
      }
    }
    for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
      iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if (iVar2 != 0xe) {
        if (*param_2 != -1) {
          iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + *param_2 * 2));
          iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          if (iVar2 == iVar3) goto LAB_004510ce;
        }
        for (local_c = 0; local_c < *(int *)(param_1 + 0x2f4); local_c = local_c + 1) {
          iVar2 = FUN_0044f680(CONCAT22((short)((uint)local_c >> 0x10),
                                        *(undefined2 *)(param_1 + 4 + local_8 * 2)));
          if (iVar2 == *(int *)(param_1 + 0x2d8 + local_c * 4)) {
            uVar4 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
            cVar1 = FUN_00450c20(uVar4);
            if (cVar1 != '\0') {
              uVar4 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
              iVar2 = FUN_0044f700(uVar4);
              if (iVar2 == 2) {
                if (*param_2 != -1) {
                  *param_3 = local_8;
                  return;
                }
                *param_2 = local_8;
                break;
              }
              uVar4 = FUN_0044f680(CONCAT22(extraout_var_00,
                                            *(undefined2 *)(param_1 + 4 + local_8 * 2)));
              iVar2 = FUN_0044f700(uVar4);
              if (iVar2 == 3) {
                if (*param_2 == -1) {
                  *param_2 = local_8;
                  *param_3 = local_8 + 1;
                  return;
                }
                *param_3 = local_8;
                return;
              }
            }
          }
        }
      }
LAB_004510ce:
    }
    for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
      iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if ((iVar2 != 0xe) &&
         (iVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2))),
         iVar2 < *(int *)(param_1 + 0x2d8))) {
        if (*param_2 != -1) {
          *param_3 = local_8;
          return;
        }
        *param_2 = local_8;
      }
    }
  }
  return;
}

