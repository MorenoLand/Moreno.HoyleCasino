// FUN_005affb0  005affb0

void __thiscall FUN_005affb0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_c;
  iVar1 = FUN_005dcb00(param_2);
  if (*(char *)(iVar1 + 0x4a2) == '\0') {
    puVar2 = (undefined4 *)FUN_005cb880(local_1c,param_2);
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    puVar3 = local_24;
    FUN_005cb880(local_14,param_2);
    puVar2 = (undefined4 *)FUN_0064c5c0(puVar3,uVar4,uVar5);
    uVar5 = puVar2[1];
    *(undefined4 *)param_3 = *puVar2;
    *(undefined4 *)((int)param_3 + 4) = uVar5;
  }
  return;
}

