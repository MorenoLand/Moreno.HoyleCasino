// FUN_005cb920  005cb920

undefined1 FUN_005cb920(void)

{
  int *piVar1;
  int iVar2;
  undefined1 local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  FUN_005cb880(&local_10,0);
  for (local_8 = 1; local_8 < 5; local_8 = local_8 + 1) {
    piVar1 = (int *)FUN_005cb880(local_18,local_8);
    local_10 = local_10 + *piVar1;
    iVar2 = FUN_005cb880(local_20,local_8);
    local_c = local_c + *(int *)(iVar2 + 4);
  }
  if ((local_10 < 1) && (local_c < 1)) {
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  return local_28;
}

