// FUN_00480f30  00480f30

undefined4 __fastcall FUN_00480f30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(DAT_007947e0 + 0x4f04) == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00480f80();
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x3d0) == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

