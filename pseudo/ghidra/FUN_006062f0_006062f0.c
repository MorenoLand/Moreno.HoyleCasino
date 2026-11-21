// FUN_006062f0  006062f0

undefined4 __fastcall FUN_006062f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_006063e0(param_1);
    if (iVar2 <= local_8) {
      return 0;
    }
    FUN_00606350(local_8);
    cVar1 = FUN_00600230();
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  uVar3 = FUN_00606350(local_8);
  return uVar3;
}

