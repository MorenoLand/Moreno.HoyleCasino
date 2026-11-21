// FUN_00451870  00451870

undefined4 __thiscall
FUN_00451870(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  if ((*(char *)(param_1 + 0x2ce) != '\0') && (*(char *)(param_1 + 0x2c5) != '\0')) {
    *param_5 = -1;
    *param_6 = -1;
    if (*(char *)(param_1 + 0x2ca) == '\0') {
      if (*(char *)(param_1 + 0x2be) == '\0') {
        if (((*(int *)(param_1 + 0x2e8) < param_2) || (param_2 < *(int *)(param_1 + 0x2d8))) &&
           ((param_2 != 0xe || (*(int *)(param_1 + 0x2d8) != 1)))) {
          *param_5 = param_3;
          *param_6 = param_4;
          return 1;
        }
        if ((*(int *)(param_1 + 0x2f4) == 6) &&
           ((((*(int *)(param_1 + 0x2d8) == 1 && (param_2 == 0xe)) ||
             (*(int *)(param_1 + 0x2d8) == param_2)) || (*(int *)(param_1 + 0x2ec) == param_2)))) {
          *param_5 = param_3;
          *param_6 = param_4;
          return 1;
        }
      }
      else {
        if (((*(int *)(param_1 + 0x2f4) == 5) && (param_2 != 0xe)) &&
           ((*(int *)(param_1 + 0x2e8) < param_2 || (param_2 < *(int *)(param_1 + 0x2d8))))) {
          *param_5 = param_3;
          *param_6 = param_4;
          return 1;
        }
        if (*(int *)(param_1 + 0x2f4) == 6) {
          if (param_2 == 0xe) {
            if ((*(int *)(param_1 + 0x2d8) == 1) || (*(int *)(param_1 + 0x2ec) == 0xe)) {
              return 0;
            }
            if ((*(int *)(param_1 + 0x2d8) == *(int *)(param_1 + 0x2fc)) ||
               (*(int *)(param_1 + 0x2ec) == *(int *)(param_1 + 0x2fc))) {
              *param_5 = param_3;
              *param_6 = param_4;
              return 1;
            }
          }
          if ((param_2 == *(int *)(param_1 + 0x2d8)) || (param_2 == *(int *)(param_1 + 0x2ec))) {
            *param_5 = param_3;
            *param_6 = param_4;
            return 1;
          }
          if ((((*(int *)(param_1 + 0x2d8) == *(int *)(param_1 + 0x2fc)) ||
               (*(int *)(param_1 + 0x2ec) == *(int *)(param_1 + 0x2fc))) &&
              (*(int *)(param_1 + 0x2d8) < param_2)) && (param_2 < *(int *)(param_1 + 0x2ec))) {
            *param_5 = param_3;
            *param_6 = param_4;
            return 1;
          }
        }
        if ((*(int *)(param_1 + 0x2f4) == 7) &&
           (((*(int *)(param_1 + 0x2d8) == 1 &&
             ((*(int *)(param_1 + 0x2fc) == 7 || (*(int *)(param_1 + 0x2fc) == 2)))) ||
            ((*(int *)(param_1 + 0x2f0) == 0xe &&
             ((*(int *)(param_1 + 0x2fc) == 8 || (*(int *)(param_1 + 0x2fc) == 0xd)))))))) {
          *param_5 = param_3;
          *param_6 = param_4;
          return 1;
        }
      }
    }
    else if (param_2 == 0xe) {
      if (((*(char *)(param_1 + 0x2be) != '\0') && (*(int *)(param_1 + 0x2f4) == 5)) &&
         ((*(int *)(param_1 + 0x2d8) == 1 || (*(int *)(param_1 + 0x2e8) == 0xe)))) {
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
          *param_5 = local_8;
          *param_6 = local_8 + 1;
          return 1;
        }
      }
    }
  }
  return 0;
}

