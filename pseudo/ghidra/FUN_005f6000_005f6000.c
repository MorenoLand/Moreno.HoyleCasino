// FUN_005f6000  005f6000

void __fastcall FUN_005f6000(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_005f5600();
  if (cVar1 == '\0') {
    FUN_005f5cf0();
    if (*(int *)(param_1 + 0x18c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18c) + 8))();
    }
  }
  return;
}

