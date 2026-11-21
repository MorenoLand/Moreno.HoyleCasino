// FUN_00636ce0  00636ce0

undefined4 __fastcall FUN_00636ce0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar2 <= local_8) {
      return 0;
    }
    cVar1 = FUN_0063b340();
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 1;
}

