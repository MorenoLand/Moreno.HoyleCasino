// FUN_005d6cd0  005d6cd0

undefined4 __fastcall FUN_005d6cd0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_40 [8];
  undefined8 local_38;
  int local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;
  
  local_38 = FUN_0064c8a0(0,0);
  local_28 = 5000;
  local_24 = 10000;
  local_20 = 50000;
  local_1c = 100000;
  local_18 = 1000000;
  local_14 = 100000000;
  local_10 = 1000000000;
  local_c = local_38;
  iVar2 = FUN_005d52e0();
  if (*(char *)(iVar2 + 0x29) == '\0') {
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      FUN_005d5ac0(local_30);
      cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
      if (cVar1 != '\0') {
        (**(code **)(*DAT_007947e4 + 0x27c))(*(undefined4 *)(param_1 + 4),&local_c);
        piVar3 = (int *)FUN_0064c5c0(local_40,local_c);
        local_30[0] = *piVar3;
      }
      if (999 < local_30[0]) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

