// FUN_006340d0  006340d0

undefined4 __fastcall FUN_006340d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  cVar1 = FUN_00636760(param_1);
  if (cVar1 == '\0') {
    iVar3 = FUN_00636690();
    if (iVar3 == 1) {
      uVar2 = FUN_00634170();
    }
    else {
      iVar3 = (**(code **)(*DAT_0162ee80 + 0x1ec))();
      if (iVar3 == 0) {
        uVar2 = FUN_00634170();
      }
      else {
        piVar4 = (int *)FUN_0063aac0(param_1,*(undefined4 *)(iVar3 + 4));
        if (*piVar4 == 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 4) + 4);
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

