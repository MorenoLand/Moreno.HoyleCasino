// FUN_00561f20  00561f20

void __fastcall FUN_00561f20(int param_1)

{
  char cVar1;
  int local_24;
  undefined4 local_18 [5];
  
  local_18[0] = 0x7b;
  local_18[1] = 0xb6;
  local_18[2] = 0xf1;
  local_18[3] = 300;
  local_18[4] = 0x167;
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    (**(code **)(**(int **)(param_1 + 0x4c + local_24 * 4) + 0x44))(local_18[local_24],0x146);
    cVar1 = FUN_00568840(CONCAT22((short)((uint)local_24 >> 0x10),
                                  *(undefined2 *)(*(int *)(param_1 + 8 + local_24 * 4) + 400)));
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x4c + local_24 * 4) + 0x70))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x4c + local_24 * 4) + 0x74))();
    }
  }
  return;
}

