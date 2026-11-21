// FUN_005d5e10  005d5e10

void __thiscall FUN_005d5e10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x4bc) = param_2;
  *(undefined4 *)(param_1 + 0x4c0) = param_3;
  if ((*(int *)(param_1 + 0x4bc) < 0) || (*(int *)(param_1 + 0x4c0) < 0)) {
    FUN_005e9f20("currentBet.dollars >= 0 && currentBet.cents >= 0","..\\Casino\\casinoplayer.cpp",
                 0x1b4);
  }
  if ((DAT_0162ee80 != 0) && (*(int *)(DAT_007947e4 + 0x68) != 0)) {
    piVar1 = (int *)FUN_0063aac0();
    if (*piVar1 != 0) {
      FUN_005ca8b0();
    }
  }
  return;
}

