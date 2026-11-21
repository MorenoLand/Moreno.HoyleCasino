// FUN_004362a0  004362a0

void __thiscall FUN_004362a0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  if (((param_2 != -1) && (cVar2 = FUN_00436230(param_2), cVar2 != '\0')) &&
     (iVar3 = FUN_005dcb00(param_2), iVar3 != 0)) {
    FUN_005dcb00(param_2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar3 = FUN_005dcb00(param_2), *(char *)(iVar3 + 0x4a0) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(*DAT_007906d0 + 0x290))(param_2);
      for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
        if (0 < *(int *)(param_1 + 0x134 + param_2 * 0x260 + local_8 * 8)) {
          (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0xc4))
                    (param_1 + 0x134 + param_2 * 0x260 + local_8 * 8,0,1);
        }
      }
      iVar3 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar3 + 0x4a0) = 1;
      FUN_004299b0();
      FUN_005db890();
      (**(code **)(*(int *)DAT_007906d0[1] + 8))(1,0);
    }
  }
  return;
}

