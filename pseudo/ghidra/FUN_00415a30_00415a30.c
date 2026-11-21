// FUN_00415a30  00415a30

void __thiscall FUN_00415a30(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_14 [8];
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_c;
  iVar2 = FUN_005dcb00(param_2);
  if (*(char *)(iVar2 + 0x4a2) == '\0') {
    puVar3 = (undefined4 *)FUN_005cb880(local_14,param_2);
    uVar1 = puVar3[1];
    *(undefined4 *)param_3 = *puVar3;
    *(undefined4 *)((int)param_3 + 4) = uVar1;
  }
  return;
}

