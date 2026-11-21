// FUN_0060d640  0060d640

void __thiscall FUN_0060d640(int param_1,int *param_2)

{
  if ((*(int *)(param_1 + 0x90) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    PatBlt(*(HDC *)(param_1 + 0x90),*param_2,param_2[1],param_2[2],param_2[3],0x42);
  }
  return;
}

