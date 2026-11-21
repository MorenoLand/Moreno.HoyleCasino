// FUN_00458e90  00458e90

int FUN_00458e90(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int local_c;
  int local_8;
  
  local_c = param_2;
  if (param_2 < 5) {
    for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
      uVar2 = FUN_004604d0(param_1,local_8);
      cVar1 = FUN_00461220(param_1,uVar2);
      if (cVar1 == '\0') {
        if (local_c == 0) {
          return local_8;
        }
        local_c = local_c + -1;
      }
    }
  }
  else if (param_2 == 5) {
    iVar3 = FUN_00641280(*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2));
    iVar4 = FUN_00641280(*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2));
    if (iVar3 < iVar4) {
      param_2 = FUN_00461360(param_1,CONCAT22(extraout_var,
                                              *(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)));
    }
    else {
      param_2 = FUN_00461360(param_1,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2));
    }
  }
  else {
    iVar3 = FUN_00641280(*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2));
    iVar4 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)
                                 ));
    if (iVar3 < iVar4) {
      param_2 = FUN_00461360(param_1,CONCAT22(extraout_var_01,
                                              *(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)));
    }
    else {
      param_2 = FUN_00461360(param_1,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2));
    }
  }
  return param_2;
}

