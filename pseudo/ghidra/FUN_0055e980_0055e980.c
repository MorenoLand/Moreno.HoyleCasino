// FUN_0055e980  0055e980

undefined4 __thiscall FUN_0055e980(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined8 uVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_10 = param_3; local_c = param_2, local_10 < param_4; local_10 = local_10 + 1) {
    cVar1 = FUN_0055e440(param_2,local_10);
    if (cVar1 != '\0') {
      for (local_14 = 0; iVar2 = FUN_00559380(), local_14 < iVar2; local_14 = local_14 + 1) {
        iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_14 * 2));
        if ((iVar2 != 0x14) &&
           (((iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_14 * 2)), local_10 <= iVar2
             && (iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_14 * 2)),
                iVar2 <= local_10 + 4)) ||
            ((iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_14 * 2)), iVar2 == 0xe &&
             (local_10 == 1)))))) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_14;
          local_8 = local_8 + 1;
        }
      }
      return 1;
    }
  }
  do {
    local_c = local_c + 1;
    if (5 < local_c) {
      return 0;
    }
    for (local_10 = param_3; local_10 < param_4; local_10 = local_10 + 1) {
      cVar1 = FUN_0055e4c0(param_2,local_10,local_c);
      if (cVar1 != '\0') {
        local_14 = 0;
        goto LAB_0055eae1;
      }
    }
  } while( true );
LAB_0055eae1:
  iVar2 = FUN_00559380();
  if (iVar2 <= local_14) {
    return 1;
  }
  iVar2 = FUN_005593d0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_14 * 2)));
  if (iVar2 != 0x14) {
    uVar4 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_14 * 2)));
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 < local_10) {
LAB_0055eb42:
      iVar2 = FUN_00641280(CONCAT22((short)((uint)iVar2 >> 0x10),
                                    *(undefined2 *)(param_1 + 4 + local_14 * 2)));
      if ((iVar2 != 0xe) || (local_10 != 1)) goto LAB_0055ead8;
    }
    else {
      iVar3 = FUN_00641280(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_14 * 2)));
      iVar2 = local_10 + 4;
      if (iVar2 < iVar3) goto LAB_0055eb42;
    }
    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_14;
    local_8 = local_8 + 1;
  }
LAB_0055ead8:
  local_14 = local_14 + 1;
  goto LAB_0055eae1;
}

