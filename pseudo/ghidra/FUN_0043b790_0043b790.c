// FUN_0043b790  0043b790

int __fastcall FUN_0043b790(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = -1;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8,param_1);
    if (*(char *)(iVar1 + 0x4a1) == '\0') {
      puVar3 = local_18;
      FUN_005dcb00(local_8,puVar3);
      piVar2 = (int *)FUN_005d5a90(puVar3);
      if (local_c < *piVar2) {
        puVar3 = local_20;
        FUN_005dcb00(local_8,puVar3);
        piVar2 = (int *)FUN_005d5a90(puVar3);
        local_c = *piVar2;
        local_10 = local_8;
      }
    }
  }
  return local_10;
}

