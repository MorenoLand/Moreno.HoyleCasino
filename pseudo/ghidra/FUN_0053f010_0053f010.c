// FUN_0053f010  0053f010

void FUN_0053f010(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_007933ec + 0xe8));
  if (iVar2 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_007933ec + 0xe8));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 == 0x310e9a) {
        FUN_00540ed0(*(undefined4 *)(DAT_007933ec + 0xe8));
      }
      else {
        if (param_1 == 0x310e9b) {
          FUN_00541600(*(undefined4 *)(DAT_007933ec + 0xe8),1);
          return;
        }
        if (param_1 == 0x310e9c) {
          FUN_00541600(*(undefined4 *)(DAT_007933ec + 0xe8),0);
          return;
        }
      }
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

