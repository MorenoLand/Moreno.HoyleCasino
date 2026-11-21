// FUN_005cd620  005cd620

void __thiscall FUN_005cd620(int param_1,byte param_2)

{
  char cVar1;
  
  FUN_005f0ae0(param_2);
  if (*(int *)(param_1 + 0x1d0) != 0) {
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      if (param_2 < 0xff) {
        (**(code **)(**(int **)(param_1 + 0x1d0) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x1d0) + 0x74))();
      }
    }
  }
  return;
}

