// FUN_00432290  00432290

void __fastcall FUN_00432290(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(DAT_007906d4 + 0xad8);
  cVar2 = FUN_005df7b0(0xffffffff);
  if (((cVar2 != '\0') && (*(char *)(DAT_007906d4 + 0xad5) == '\0')) &&
     (cVar2 = FUN_004360c0(*(undefined4 *)(DAT_007906d4 + 0xad8)), cVar2 != '\0')) {
    *(undefined1 *)(DAT_007906d4 + 0xad5) = 1;
    FUN_0043b830(0);
    FUN_0057c140();
    return;
  }
  FUN_0042a270();
  FUN_004347f0();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && (cVar2 = FUN_004349b0(uVar4), cVar2 != '\0')) &&
     (cVar2 = FUN_004348e0(uVar4), cVar2 != '\0')) {
    uVar4 = FUN_00630f40("SID_CASINO_TABLEMINNOTMET_TITLE",0);
    uVar4 = FUN_00630f40("SID_CASINO_TABLEMINNOTMET_SHORT",uVar4);
    FUN_0062ff10(uVar4);
    return;
  }
  cVar2 = FUN_004349b0(*(undefined4 *)(DAT_007906d4 + 0xad8));
  if (cVar2 == '\0') {
    iVar5 = FUN_004347f0();
    *(undefined1 *)(iVar5 + 0x4a1) = 1;
  }
  else {
    iVar5 = FUN_004347f0();
    *(undefined1 *)(iVar5 + 0x4a0) = 1;
  }
  piVar3 = (int *)FUN_004347f0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_005db890();
  (**(code **)(**(int **)(param_1 + 4) + 8))(1,0);
  return;
}

