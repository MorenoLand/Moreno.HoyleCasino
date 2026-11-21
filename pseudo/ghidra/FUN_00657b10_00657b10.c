// FUN_00657b10  00657b10

void __fastcall FUN_00657b10(int param_1)

{
  char cVar1;
  int local_8;
  
  cVar1 = FUN_006578b0();
  if (cVar1 == '\0') {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0x28c + local_8 * 4) + 0xd0))();
    }
  }
  else {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 0x28c + local_8 * 4) + 0xcc))();
    }
  }
  return;
}

