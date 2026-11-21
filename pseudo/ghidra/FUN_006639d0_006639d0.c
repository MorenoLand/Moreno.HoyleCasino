// FUN_006639d0  006639d0

int __thiscall FUN_006639d0(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *_Str2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) {
      return -1;
    }
    _Str2 = param_2;
    iVar1 = FUN_0060ca40(local_8);
    iVar1 = strcmp((char *)(iVar1 + 4),_Str2);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

