// FUN_00665140  00665140

void __thiscall FUN_00665140(int param_1,int param_2,char param_3,char param_4)

{
  if (param_3 == '\0') {
    *(char *)(param_1 + param_2 + 0x4d) = *(char *)(param_1 + param_2 + 0x4d) + param_4;
  }
  else {
    *(char *)(param_1 + param_2 + 0x41) = *(char *)(param_1 + param_2 + 0x41) + param_4;
  }
  FUN_00664630();
  return;
}

