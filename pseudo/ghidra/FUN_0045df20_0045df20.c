// FUN_0045df20  0045df20

void __thiscall FUN_0045df20(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_c;
  iVar2 = FUN_005dcb00(param_2);
  if (*(char *)(iVar2 + 0x4a2) == '\0') {
    iVar2 = *(int *)(DAT_00790738 + 4) + 0x48 + param_2 * 0x20;
    local_1c = *(undefined4 *)(iVar2 + 8);
    local_18 = *(undefined4 *)(iVar2 + 0xc);
    puVar3 = (undefined4 *)(*(int *)(DAT_00790738 + 4) + 0x48 + param_2 * 0x20);
    local_14 = *puVar3;
    local_10 = puVar3[1];
    puVar3 = (undefined4 *)FUN_0064c5c0(local_24,local_1c,local_18);
    uVar1 = puVar3[1];
    *(undefined4 *)param_3 = *puVar3;
    *(undefined4 *)((int)param_3 + 4) = uVar1;
  }
  return;
}

