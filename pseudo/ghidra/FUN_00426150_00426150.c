// FUN_00426150  00426150

uint __fastcall FUN_00426150(undefined4 param_1)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    FUN_005dcb00(local_8,param_1);
    piVar1 = (int *)FUN_0063aac0();
    if (((*piVar1 != 0) && (iVar2 = FUN_005dcb00(local_8,param_1), *(char *)(iVar2 + 0x4a1) == '\0')
        ) && (iVar2 = FUN_005dcb00(local_8,param_1), *(char *)(iVar2 + 0x4a0) == '\0')) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

