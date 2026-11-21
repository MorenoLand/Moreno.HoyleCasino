// FUN_00576920  00576920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00576920(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar2 = true;
  bVar5 = *(int *)(param_1 + 0x7c) == -1;
  iVar1 = *(int *)(param_1 + 0x74);
  FUN_00575e20(0);
  if ((*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x84)) &&
     (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x88))) {
    if (*(int *)(param_1 + 0x80) == 7) {
      FUN_00576220();
      uVar4 = FUN_00576bf0();
      *(undefined4 *)(param_1 + 0x7c) = uVar4;
    }
    else {
      if (bVar5) {
        FUN_00575e80(*(int *)(&DAT_007493ec + iVar1 * 4 + *(int *)(param_1 + 0x80) * 0xc));
      }
      else {
        FUN_00575e80(*(int *)(&DAT_007493ec + iVar1 * 4 + *(int *)(param_1 + 0x80) * 0xc) *
                     *(int *)(&DAT_007493d8 + *(int *)(param_1 + 0x7c) * 4));
      }
      FUN_00576030(iVar1);
      cVar3 = (**(code **)(*DAT_0162ee84 + 0x38))();
      if (cVar3 != '\0') {
        (**(code **)(*DAT_0162ee84 + 0x80))(0x19258,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
    }
  }
  else {
    bVar2 = false;
    FUN_00576220();
    FUN_00575e80(0);
  }
  if ((bVar5) || ((*(int *)(param_1 + 0x80) == 7 && (bVar2)))) {
    if (*(int *)(param_1 + 0x7c) == -1) {
      if (*(int *)(param_1 + 0x70) == 0) {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(2);
      }
      else {
        (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
      }
    }
    else if (bVar5) {
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(5);
    }
    else {
      (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(6);
    }
  }
  else {
    (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(7);
  }
  (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
  return;
}

