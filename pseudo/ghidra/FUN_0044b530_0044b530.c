// FUN_0044b530  0044b530

void __thiscall FUN_0044b530(undefined4 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  int local_8;
  
  local_10 = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_10;
  iVar2 = FUN_005dcb00(param_2);
  if (*(char *)(iVar2 + 0x4a2) == '\0') {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      puVar3 = (undefined4 *)
               (*(int *)(DAT_00790710 + 8 + (param_2 * 3 + local_8) * 4) + 0x48 + param_2 * 0x20);
      local_18 = *puVar3;
      local_14 = puVar3[1];
      puVar3 = (undefined4 *)FUN_0064c5c0(local_20,local_18,local_14);
      uVar1 = puVar3[1];
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)((int)param_3 + 4) = uVar1;
    }
  }
  return;
}

