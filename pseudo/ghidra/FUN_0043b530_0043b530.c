// FUN_0043b530  0043b530

undefined4 FUN_0043b530(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = FUN_005da880();
  local_14 = (local_8 * 0x28) / 100;
  local_c = FUN_0043b6f0();
  local_10 = FUN_0043b790();
  local_18 = FUN_005da8c0();
  if ((local_18 != 1) && (param_1 == local_c)) {
    puVar3 = local_20;
    FUN_005dcb00(param_1,puVar3);
    piVar1 = (int *)FUN_005d5a90(puVar3);
    puVar3 = local_28;
    FUN_005dcb00(local_10,puVar3);
    piVar2 = (int *)FUN_005d5a90(puVar3);
    if (*piVar1 < *piVar2 - local_14) {
      return 1;
    }
  }
  return 0;
}

