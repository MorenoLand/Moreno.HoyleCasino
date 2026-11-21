// FUN_00673de0  00673de0

void __thiscall FUN_00673de0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = *(int *)(param_1 + 0x1c);
  local_1c = *(int *)(param_1 + 0x18);
  local_20 = *(int *)(param_1 + 0x14);
  local_24 = *(int *)(param_1 + 0x10);
  FUN_005ec3a0(&local_24,&local_24,param_2);
  if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 4) != 0)) {
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      local_14 = local_24 - *(int *)(param_1 + 0x10);
      local_10 = local_20 - *(int *)(param_1 + 0x14);
      local_c = (local_1c - local_24) + local_14;
      local_8 = (local_18 - local_20) + local_10;
      iVar2 = FUN_005f84f0();
      iVar3 = FUN_005f84d0();
      local_24 = local_24 + iVar3;
      local_20 = local_20 + iVar2;
      local_1c = local_1c + iVar3;
      local_18 = local_18 + iVar2;
      FUN_0062e3c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1a8) + 0x50),local_24,local_20
                   ,local_1c,local_18,local_14,local_10,local_c,local_8);
    }
  }
  return;
}

