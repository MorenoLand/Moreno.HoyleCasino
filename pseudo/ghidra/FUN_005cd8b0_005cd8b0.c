// FUN_005cd8b0  005cd8b0

undefined4 __fastcall FUN_005cd8b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*DAT_007947e4 + 0x294))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 400) == '\0') {
    iVar3 = FUN_006377b0();
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = FUN_006377b0();
      if (iVar3 == 10) {
        uVar2 = 1;
      }
      else {
        iVar3 = FUN_0062fbf0(10);
        iVar4 = FUN_006377b0();
        if (iVar4 < iVar3) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 400) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

