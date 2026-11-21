// FUN_005f6b60  005f6b60

void __fastcall FUN_005f6b60(int *param_1)

{
  if ((char)param_1[0x16] != '\0') {
    param_1[4] = param_1[4] + -1;
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + -1;
    param_1[7] = param_1[7] + 1;
  }
  (**(code **)(*param_1 + 0xac))();
  if ((char)param_1[0x16] != '\0') {
    param_1[4] = param_1[4] + 1;
    param_1[6] = param_1[6] + -1;
    param_1[5] = param_1[5] + 1;
    param_1[7] = param_1[7] + -1;
  }
  return;
}

