// FUN_00646150  00646150

void __thiscall FUN_00646150(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x44))(param_2,param_3);
  (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_2,param_3);
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 4) != 0)) {
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_006643f0(param_2,param_3);
      cVar2 = FUN_00664710();
      if (cVar2 != '\0') {
        FUN_00664630();
      }
    }
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    (**(code **)(*DAT_0162ee80 + 0x1ac))(*(undefined4 *)(param_1 + 0x18),param_1);
    (**(code **)(*DAT_0162ee80 + 0x1b0))(*(undefined4 *)(param_1 + 0x18),param_1);
    (**(code **)(*DAT_0162ee80 + 0x1b4))(*(undefined4 *)(param_1 + 0x18),param_1);
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
      }
      else if (*(int *)(param_1 + 4) != 0) {
        uVar4 = (**(code **)(*DAT_0162ee80 + 0x1d4))(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
        uVar4 = (**(code **)(*DAT_0162ee80 + 0x1d0))
                          (*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar4);
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(uVar4);
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 == 1) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
        }
      }
    }
  }
  return;
}

