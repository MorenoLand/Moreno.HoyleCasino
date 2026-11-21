// FUN_005aee50  005aee50

void __thiscall FUN_005aee50(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_005dcb00(param_2);
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = param_2;
    }
    FUN_005b7310(4,local_1c);
    (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_005b6c90(param_2);
  (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  return;
}

