// FUN_0043b6f0  0043b6f0

int __fastcall FUN_0043b6f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 1000000000;
  local_10 = -1;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    iVar1 = FUN_005dcb00(local_c,param_1);
    if (*(char *)(iVar1 + 0x4a1) == '\0') {
      puVar3 = local_18;
      FUN_005dcb00(local_c,puVar3);
      piVar2 = (int *)FUN_005d5a90(puVar3);
      if (*piVar2 < local_8) {
        puVar3 = local_20;
        FUN_005dcb00(local_c,puVar3);
        piVar2 = (int *)FUN_005d5a90(puVar3);
        local_8 = *piVar2;
        local_10 = local_c;
      }
    }
  }
  return local_10;
}

