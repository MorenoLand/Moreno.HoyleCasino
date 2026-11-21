// FUN_005f5cf0  005f5cf0

void __fastcall FUN_005f5cf0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_005f5600();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_005fc250();
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      (**(code **)(**(int **)(param_1 + 0x180) + 8))();
    }
  }
  return;
}

