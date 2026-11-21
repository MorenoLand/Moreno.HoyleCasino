// FUN_0056a5d0  0056a5d0

void __fastcall FUN_0056a5d0(int param_1)

{
  int *piVar1;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = FUN_005d0aa0();
  local_20 = 0;
  local_14 = *(undefined4 *)(param_1 + 4);
  FUN_0056a580(&local_10);
  piVar1 = &local_1c;
  FUN_005dcb00(0,piVar1);
  FUN_005d5ac0(piVar1);
  piVar1 = (int *)FUN_005d0c30(local_30,local_14);
  local_28 = *piVar1;
  local_24 = piVar1[1];
  local_1c = local_1c + local_28;
  local_18 = local_18 + local_24;
  FUN_0064c540();
  FUN_0064c7a0(local_10,local_c);
  return;
}

