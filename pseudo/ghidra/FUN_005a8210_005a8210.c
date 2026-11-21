// FUN_005a8210  005a8210

void __thiscall FUN_005a8210(int param_1,int param_2,int param_3)

{
  if ((-1 < param_2) && (param_2 < 4)) {
    if ((param_3 == 0x65) && (*(int *)(param_1 + 0x48 + param_2 * 4) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x48 + param_2 * 4) + 0xb8))(param_2,0);
    }
    else if (*(int *)(param_1 + 0x18 + param_2 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x18 + param_2 * 4) + 0xb8))(param_2,param_3);
    }
  }
  return;
}

