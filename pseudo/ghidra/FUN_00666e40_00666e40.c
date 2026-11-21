// FUN_00666e40  00666e40

undefined * __thiscall FUN_00666e40(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int local_8;
  
  iVar1 = FUN_00666c60(param_1);
  local_8 = 0;
  while( true ) {
    if (iVar1 <= local_8) {
      puVar3 = (undefined *)FUN_00666f00();
      return puVar3;
    }
    iVar2 = _stricmp(s_NO_SITUATION_007712e4 + local_8 * 0x48,param_2);
    if (iVar2 == 0) break;
    local_8 = local_8 + 1;
  }
  return &DAT_007712e0 + local_8 * 0x48;
}

