// FUN_00424a30  00424a30

void __thiscall FUN_00424a30(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  local_10 = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_10;
  iVar3 = FUN_005dcb00(param_2);
  if (*(char *)(iVar3 + 0x4a2) == '\0') {
    cVar2 = FUN_004272e0(param_2);
    if (cVar2 != '\0') {
      local_18 = FUN_0064c8a0(1,0,param_1);
      puVar4 = (undefined4 *)FUN_0064c5c0(local_20,local_18);
      uVar1 = puVar4[1];
      *(undefined4 *)param_3 = *puVar4;
      *(undefined4 *)((int)param_3 + 4) = uVar1;
    }
    for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
      puVar4 = (undefined4 *)
               (*(int *)(DAT_00790358 + 8 + (local_8 + param_2 * 2) * 4) + 0x48 + param_2 * 0x20);
      local_28 = *puVar4;
      local_24 = puVar4[1];
      puVar4 = (undefined4 *)FUN_0064c5c0(local_30,local_28,local_24);
      uVar1 = puVar4[1];
      *(undefined4 *)param_3 = *puVar4;
      *(undefined4 *)((int)param_3 + 4) = uVar1;
    }
  }
  return;
}

