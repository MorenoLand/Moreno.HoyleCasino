// FUN_00653030  00653030

void __thiscall FUN_00653030(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  MoveToXY(param_2,param_3);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1e0 + local_8 * 4) + 0x78))
              (param_2 + local_8 * -2,param_3 + local_8 * -2);
  }
  return;
}

