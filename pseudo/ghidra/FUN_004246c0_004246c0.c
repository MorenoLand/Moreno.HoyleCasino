// FUN_004246c0  004246c0

void __fastcall FUN_004246c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  cVar1 = FUN_00426500(*(undefined4 *)(DAT_00790358 + 0xa0));
  if (cVar1 == '\0') {
    cVar1 = FUN_004272e0(*(undefined4 *)(DAT_00790358 + 0xa0));
    if (cVar1 != '\0') {
      uVar3 = FUN_00630f40("SID_CARIBBEANSTUD_CANNOTADVANCE",0);
      uVar3 = FUN_00630f40("SID_CARIBBEANSTUD_NEEDMINIMUMBET",uVar3);
      FUN_0062ff10(uVar3);
      return;
    }
    iVar2 = FUN_00426230();
    *(undefined1 *)(iVar2 + 0x4a1) = 1;
  }
  else {
    iVar2 = FUN_00426230();
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
  }
  FUN_0041f990(*(undefined4 *)(DAT_00790358 + 0xa0));
  piVar4 = (int *)FUN_00426230();
  (**(code **)(*piVar4 + 0x14))();
  FUN_005db890();
  (**(code **)(**(int **)(param_1 + 4) + 8))(1,0);
  return;
}

