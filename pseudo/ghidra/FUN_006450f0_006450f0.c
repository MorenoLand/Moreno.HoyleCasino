// FUN_006450f0  006450f0

int __fastcall FUN_006450f0(int param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0x3ff;
  while( true ) {
    if (local_8 < 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x194 + local_8 * 4) != 0) && (cVar1 = FUN_005f54a0(), cVar1 != '\0'))
    break;
    local_8 = local_8 + -1;
  }
  return local_8 + 1;
}

