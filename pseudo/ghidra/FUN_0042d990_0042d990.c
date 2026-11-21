// FUN_0042d990  0042d990

void __fastcall FUN_0042d990(int param_1)

{
  int local_20;
  undefined4 local_c [2];
  
  local_c[0] = 0xfc4;
  local_c[1] = 0xfc6;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_20 = *(int *)(DAT_007906d4 + 0xacc);
  }
  else {
    local_20 = *(int *)(DAT_007906d4 + 0xad0);
  }
  local_20 = local_20 + -1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_005eaf00(local_c[*(int *)(param_1 + 0x20)]);
  (**(code **)(**(int **)(DAT_007906dc + 0x148 + *(int *)(param_1 + 0x20) * 4) + 0xb0))(local_20);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(0);
  }
  FUN_005f5d50(0);
  return;
}

