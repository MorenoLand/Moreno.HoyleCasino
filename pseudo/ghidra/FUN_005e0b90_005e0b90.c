// FUN_005e0b90  005e0b90

undefined4 __thiscall FUN_005e0b90(undefined4 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *_Str1;
  undefined4 uVar3;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar1 <= local_8) {
      return 0;
    }
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 0) {
      _Str1 = (char *)FUN_00520e60();
      iVar1 = strcmp(_Str1,param_2);
      if (iVar1 == 0) {
        uVar3 = FUN_005dcb00(local_8);
        return uVar3;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

