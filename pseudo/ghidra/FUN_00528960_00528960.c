// FUN_00528960  00528960

undefined4 __thiscall FUN_00528960(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[0] = 3;
  local_18[1] = 2;
  local_18[2] = 1;
  local_18[3] = 0;
  local_18[4] = 0;
  do {
    if (3 < local_18[4]) {
      return 1;
    }
    if (local_18[local_18[4]] != param_2) {
      FUN_005dcb00(local_18[local_18[4]],param_1);
      piVar1 = (int *)FUN_0063aac0();
      if (((*piVar1 != 0) &&
          (iVar2 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar2 + 0x4a0) == '\0'))
         && (iVar2 = FUN_005dcb00(local_18[local_18[4]],param_1), *(char *)(iVar2 + 0x4a1) == '\0'))
      {
        return 0;
      }
    }
    local_18[4] = local_18[4] + 1;
  } while( true );
}

