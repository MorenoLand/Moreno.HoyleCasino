// FUN_006451d0  006451d0

undefined4 __fastcall FUN_006451d0(int param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0x3ff;
  while( true ) {
    if (local_8 < 0) {
      FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x611);
      return *(undefined4 *)(param_1 + 0x194);
    }
    if ((*(int *)(param_1 + 0x194 + local_8 * 4) != 0) && (cVar1 = FUN_005f54a0(), cVar1 != '\0'))
    break;
    local_8 = local_8 + -1;
  }
  return *(undefined4 *)(param_1 + 0x194 + local_8 * 4);
}

