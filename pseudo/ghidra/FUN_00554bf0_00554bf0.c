// FUN_00554bf0  00554bf0

void __fastcall FUN_00554bf0(int param_1)

{
  char cVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    cVar1 = FUN_005573a0(CONCAT22((short)((uint)local_8 >> 0x10),
                                  *(undefined2 *)(*(int *)(param_1 + 4 + local_8 * 4) + 400)));
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x9c + local_8 * 4) + 0x70))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x9c + local_8 * 4) + 0x74))();
    }
  }
  return;
}

