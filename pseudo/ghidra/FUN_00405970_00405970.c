// FUN_00405970  00405970

void FUN_00405970(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  
  uVar1 = *(undefined4 *)(DAT_007902f0 + 0x10dc);
  if (param_1 == 0x311282) {
    FUN_004055f0(uVar1);
  }
  else if (param_1 == 0x311283) {
    FUN_005dcb00(uVar1);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_00407fa0(uVar1);
    }
    FUN_0062fde0("Baccarat: Place Last Bet\n");
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

