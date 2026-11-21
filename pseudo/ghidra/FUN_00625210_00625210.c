// FUN_00625210  00625210

uint __fastcall FUN_00625210(uint param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    param_1 = (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  return param_1;
}

