// FUN_006646c0  006646c0

undefined4 __fastcall FUN_006646c0(undefined4 param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x1a < local_8) {
      return 1;
    }
    cVar1 = FUN_005f54a0(param_1);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 0;
}

