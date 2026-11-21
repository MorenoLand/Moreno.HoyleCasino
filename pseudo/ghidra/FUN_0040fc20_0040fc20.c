// FUN_0040fc20  0040fc20

void __thiscall FUN_0040fc20(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  if (((*(char *)(param_2 + 4) == '\0') && (*(int *)(DAT_00790324 + 0x4d0) != -1)) &&
     (*(int *)(DAT_00790324 + 0x4d0) != 4)) {
    FUN_005dcb00(*(undefined4 *)(DAT_00790324 + 0x4d0));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (*(int *)(DAT_0079032c + 0x34) != 0)) {
      if (*(int *)(param_2 + 0x18) == 1) {
        if (((*(uint *)(param_2 + 0x1c) & 0x18) != 0) &&
           (cVar2 = (**(code **)(*param_1 + 0xa8))(), cVar2 == '\0')) {
          param_1[0x12] = *(int *)(param_2 + 8);
          param_1[0x13] = *(int *)(param_2 + 0xc);
          *(undefined1 *)(param_1 + 2) = 1;
          *(undefined1 *)((int)param_1 + 9) = 1;
          if ((*(uint *)(param_2 + 0x1c) & 8) == 0) {
            if ((*(uint *)(param_2 + 0x1c) & 0x10) != 0) {
              param_1[0x16] = 0x10;
            }
          }
          else {
            param_1[0x16] = 8;
          }
        }
      }
      else if (((*(int *)(param_2 + 0x18) == 2) &&
               ((*(uint *)(param_2 + 0x1c) & param_1[0x16]) != 0)) &&
              (cVar2 = (**(code **)(*param_1 + 0xa8))(), cVar2 != '\0')) {
        param_1[0x14] = *(int *)(param_2 + 8);
        param_1[0x15] = *(int *)(param_2 + 0xc);
        FUN_0040fdc0();
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)((int)param_1 + 9) = 0;
      }
    }
  }
  return;
}

