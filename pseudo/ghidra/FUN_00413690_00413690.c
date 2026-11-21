// FUN_00413690  00413690

void __thiscall FUN_00413690(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_005dcb00(param_2);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = DAT_00790324;
    if (bVar1) {
      local_18 = 0xffffffff;
    }
    else {
      local_18 = param_2;
    }
    *(undefined4 *)(DAT_00790324 + 0x4ec) = 4;
    *(undefined4 *)(iVar2 + 0x4f0) = local_18;
    (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_0041b440(param_2);
  (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  return;
}

