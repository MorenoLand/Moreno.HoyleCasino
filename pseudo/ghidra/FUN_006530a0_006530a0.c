// FUN_006530a0  006530a0

void __thiscall FUN_006530a0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  FUN_00602470(param_2,param_3);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1e0 + local_8 * 4) + 0x44))
              (param_2 + local_8,param_3 + local_8);
  }
  return;
}

