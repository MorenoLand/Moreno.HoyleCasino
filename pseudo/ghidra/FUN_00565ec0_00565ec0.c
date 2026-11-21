// FUN_00565ec0  00565ec0

undefined4 __thiscall FUN_00565ec0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00566380();
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(0);
    if ((param_2 < 0) || (3 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00743d14 + param_2 * 4);
    }
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0x108);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(0);
    if ((param_2 < 0) || (4 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00743d24 + param_2 * 4);
    }
    break;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0x112);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(0);
    if ((param_2 < 0) || (5 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00743d38 + param_2 * 4);
    }
    break;
  case 7:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0xfe);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(0x121);
    if ((param_2 < 0) || (6 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00743d50 + param_2 * 4);
    }
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(0x108);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(299);
    if ((param_2 < 0) || (7 < param_2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00743d6c + param_2 * 4);
    }
    break;
  default:
    uVar1 = 0xf5;
  }
  return uVar1;
}

