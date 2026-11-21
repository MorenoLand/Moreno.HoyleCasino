// FUN_00526800  00526800

void __thiscall FUN_00526800(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  int local_8;
  
  iVar2 = FUN_005dcb00(param_2,param_1);
  if (*(char *)(iVar2 + 0x4a2) == '\0') {
    local_10 = FUN_0064c8a0(0,0);
    *param_3 = local_10;
    for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
      puVar3 = (undefined4 *)FUN_005cb880(local_18,param_2);
      puVar3 = (undefined4 *)FUN_0064c5c0(local_20,*puVar3,puVar3[1]);
      uVar1 = puVar3[1];
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)((int)param_3 + 4) = uVar1;
    }
  }
  return;
}

