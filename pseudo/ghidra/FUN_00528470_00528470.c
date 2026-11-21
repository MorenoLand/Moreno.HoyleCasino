// FUN_00528470  00528470

undefined4 __thiscall FUN_00528470(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = FUN_005da880();
  local_14 = (local_8 * 0x28) / 100;
  local_c = FUN_00528520();
  local_10 = FUN_005285c0();
  if ((*(int *)(param_1 + 0xd40) != 1) && (param_2 == local_c)) {
    puVar3 = local_1c;
    FUN_005dcb00(param_2,puVar3);
    piVar1 = (int *)FUN_005d5a90(puVar3);
    puVar3 = local_24;
    FUN_005dcb00(local_10,puVar3);
    piVar2 = (int *)FUN_005d5a90(puVar3);
    if (*piVar1 < *piVar2 - local_14) {
      return 1;
    }
  }
  return 0;
}

