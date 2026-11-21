// FUN_00628910  00628910

int __thiscall FUN_00628910(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *_Str2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xb8))();
    if (iVar1 <= local_8) {
      return -1;
    }
    uVar2 = FUN_0060ca40(local_8);
    _Str2 = (char *)what(param_1,uVar2);
    iVar1 = strcmp(param_2,_Str2);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

