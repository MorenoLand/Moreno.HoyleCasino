// FUN_00629810  00629810

void __thiscall FUN_00629810(int param_1,int param_2)

{
  char cVar1;
  
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  cVar1 = FUN_00615140();
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0xf4))(param_1);
    if ((*(uint *)(param_2 + 0x1c) & 0x20) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1d0) + 0xf8))(param_1);
    }
  }
  return;
}

