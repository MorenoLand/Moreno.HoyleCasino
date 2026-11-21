// FUN_00432c40  00432c40

void __thiscall FUN_00432c40(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = FUN_004351b0();
  iVar5 = FUN_004347f0();
  if (iVar5 != 0) {
    FUN_004347f0();
    piVar6 = (int *)FUN_0063aac0();
    if ((*piVar6 == 2) || (piVar6 = (int *)FUN_0063aac0(), *piVar6 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      bVar2 = true;
      goto LAB_00432cca;
    }
  }
  bVar2 = false;
LAB_00432cca:
  if ((DAT_007947b0 == 0) || (cVar3 = FUN_005f88f0(), cVar3 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((bVar1) || (iVar4 != -1)) && ((bVar1 || (!bVar2)))) &&
     (cVar3 = (**(code **)(*param_1 + 0x2c4))(*(undefined4 *)(*(int *)(param_3 + 4) + 4)),
     cVar3 == '\0')) {
    *(undefined1 *)(param_2 + 4) = 1;
    *(undefined4 *)(DAT_007906d4 + 0xae0) = *(undefined4 *)(*(int *)(param_3 + 4) + 4);
    FUN_00429f60(*(undefined4 *)(*(int *)(param_3 + 4) + 4));
    FUN_00429ce0();
  }
  return;
}

