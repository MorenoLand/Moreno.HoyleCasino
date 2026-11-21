// FUN_006645d0  006645d0

void __thiscall FUN_006645d0(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x1b; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x5c + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x5c + local_8 * 4) + 0x98))(param_2);
    }
  }
  return;
}

