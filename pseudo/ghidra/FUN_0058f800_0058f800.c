// FUN_0058f800  0058f800

void __fastcall FUN_0058f800(int param_1)

{
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) + -1;
  if (local_8 == 0) {
    local_8 = 1000;
  }
  if (((*(int *)(param_1 + 0x14c) <= local_8) && (local_8 <= *(int *)(param_1 + 0x150))) ||
     ((*(int *)(param_1 + 0x14c) <= local_8 + 1000 && (local_8 + 1000 <= *(int *)(param_1 + 0x150)))
     )) {
    *(int *)(param_1 + 0x154 + *(int *)(*(int *)(param_1 + 0x174) + 0x3c08) * 4) = local_8;
    FUN_0058f730();
  }
  return;
}

