// FUN_00432760  00432760

void __thiscall FUN_00432760(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  int local_8;
  
  local_10 = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_10;
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(DAT_007906d4 + 4 + local_8 * 4) + 0x110) == -1) {
      puVar2 = (undefined4 *)FUN_005cb880(local_18,param_2);
      puVar2 = (undefined4 *)FUN_0064c5c0(local_20,*puVar2,puVar2[1]);
      uVar1 = puVar2[1];
      *(undefined4 *)param_3 = *puVar2;
      *(undefined4 *)((int)param_3 + 4) = uVar1;
    }
  }
  return;
}

