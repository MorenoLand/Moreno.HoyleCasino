// FUN_00549910  00549910

void __fastcall FUN_00549910(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar1 = (undefined4 *)FUN_005d0c30(local_24,*(undefined4 *)(param_1 + 8));
  local_1c = *puVar1;
  local_18 = puVar1[1];
  piVar2 = (int *)FUN_005d14b0(local_2c);
  local_c = *piVar2;
  local_8 = piVar2[1];
  piVar2 = (int *)FUN_005d0c30(local_34,*(undefined4 *)(param_1 + 4));
  local_14 = *piVar2 + local_c;
  local_10 = piVar2[1] + local_8;
  FUN_0064c7a0(local_1c,local_18);
  return;
}

