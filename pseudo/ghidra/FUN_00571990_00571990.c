// FUN_00571990  00571990

void __fastcall FUN_00571990(int param_1)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; (local_c < 7 && (*(int *)(param_1 + 0x18 + local_c * 4) != -1));
      local_c = local_c + 1) {
  }
  if (local_c != 0) {
    if (local_c == 1) {
      local_8 = DAT_00748918;
    }
    else if (local_c < 3) {
      local_8 = DAT_0074891c;
    }
    else if (local_c < 7) {
      local_8 = DAT_00748920;
    }
    else {
      local_8 = DAT_00748924;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + local_8;
    *(int *)(param_1 + 0x60 + local_c * 4) = *(int *)(param_1 + 0x60 + local_c * 4) + local_8;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + local_8;
  }
  return;
}

