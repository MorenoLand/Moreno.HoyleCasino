// FUN_0058a470  0058a470

int __fastcall FUN_0058a470(int param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x1bc + local_8 * 4) != 0) {
      cVar1 = FUN_00600230();
      if (cVar1 != '\0') {
        local_c = local_c + 1;
      }
    }
  }
  return local_c;
}

