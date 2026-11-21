// FUN_00548c10  00548c10

void __fastcall FUN_00548c10(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    if (*(char *)(param_1 + 0x24) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 2;
      FUN_00545b40(2);
      FUN_005492c0(*(undefined4 *)(param_1 + 0x20),1);
      FUN_005450a0();
      cVar1 = FUN_0054a6c0(*(undefined4 *)(param_1 + 0x20));
      if (cVar1 != '\0') {
        FUN_00545600(7);
        FUN_00549750();
        return;
      }
      cVar1 = FUN_0054a770(*(undefined4 *)(param_1 + 0x20));
      if (cVar1 == '\0') {
        return;
      }
      FUN_00549750();
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x20) == 2) &&
          (cVar1 = FUN_0054a6c0(*(undefined4 *)(param_1 + 0x20)), cVar1 != '\0')) {
    FUN_00545600(7);
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00549750();
    return;
  }
  FUN_00545b90();
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00549cd0();
  return;
}

