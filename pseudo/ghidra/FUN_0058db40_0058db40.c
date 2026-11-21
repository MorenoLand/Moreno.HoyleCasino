// FUN_0058db40  0058db40

void __fastcall FUN_0058db40(int param_1)

{
  char cVar1;
  
  FUN_00584f50();
  if (*(int *)(param_1 + 0x88) != 0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x74))();
  }
  cVar1 = FUN_006026d0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x70))();
  }
  cVar1 = FUN_006026d0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x70))();
  }
  return;
}

