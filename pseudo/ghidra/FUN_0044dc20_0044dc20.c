// FUN_0044dc20  0044dc20

int __fastcall FUN_0044dc20(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = FUN_0062fbf0(4,param_1);
  while( true ) {
    if (3 < local_c) {
      return -1;
    }
    FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if (((*piVar3 != 0) && (iVar4 = FUN_005dcb00(local_8), *(char *)(iVar4 + 0x4a1) == '\0')) &&
       (cVar2 = FUN_0044da90(local_8), cVar2 != '\0')) break;
    bVar1 = 3 < local_8;
    local_8 = local_8 + 1;
    if (bVar1) {
      local_8 = 0;
    }
    local_c = local_c + 1;
  }
  return local_8;
}

