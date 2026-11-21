// FUN_005454f0  005454f0

void __thiscall FUN_005454f0(int param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x74))();
    if (*(int *)(DAT_00793404 + 4) == 0) {
      FUN_00545410(1,0x14);
    }
  }
  return;
}

