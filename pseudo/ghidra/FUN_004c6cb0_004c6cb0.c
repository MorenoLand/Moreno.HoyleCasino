// FUN_004c6cb0  004c6cb0

undefined4 __fastcall FUN_004c6cb0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_005dcb00(*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)FUN_0063aac0();
  if (*piVar1 != 2) {
    piVar1 = (int *)FUN_0063aac0();
    if (*piVar1 != 3) {
      uVar3 = 0;
      goto LAB_004c6d01;
    }
  }
  uVar3 = 1;
LAB_004c6d01:
  if ((char)uVar3 == '\0') {
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar1 = (int *)FUN_0063aac0();
    if (*piVar1 == 1) {
      uVar3 = 1;
    }
    else {
      uVar2 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
      piVar1 = (int *)FUN_0063aac0(uVar3,param_1,uVar2);
      if (*piVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x70);
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

