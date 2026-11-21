// FUN_00435300  00435300

undefined4 __fastcall FUN_00435300(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xad8);
  if (iVar1 != -1) {
    iVar3 = FUN_005f5400();
    if ((iVar3 == 2) && (cVar2 = FUN_004369a0(iVar1,3), cVar2 == '\0')) {
      return 1;
    }
    uVar4 = FUN_005f5400();
    cVar2 = FUN_00438840(uVar4);
    if (cVar2 != '\0') {
      iVar3 = FUN_005f5400();
      cVar2 = FUN_004369a0(iVar1,iVar3 + 6);
      if (cVar2 == '\0') {
        return 1;
      }
    }
    uVar4 = FUN_005f5400();
    cVar2 = FUN_004388a0(uVar4);
    if ((cVar2 != '\0') && (cVar2 = FUN_004369a0(iVar1,0x3c), cVar2 != '\0')) {
      return 1;
    }
    uVar4 = FUN_005f5400();
    cVar2 = FUN_00438870(uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

