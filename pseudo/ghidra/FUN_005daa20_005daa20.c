// FUN_005daa20  005daa20

undefined8 * __thiscall FUN_005daa20(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_c = FUN_00636610(param_1);
  local_1c = FUN_0064c8a0(0,0);
  local_14 = local_1c;
  for (local_8 = 0; local_8 < local_c; local_8 = local_8 + 1) {
    puVar3 = local_24;
    uVar4 = local_14;
    FUN_005dcb00(local_8,puVar3,local_14);
    FUN_005d5a90(puVar3);
    cVar1 = FUN_0064c6e0(uVar4);
    if (cVar1 != '\0') {
      puVar3 = local_2c;
      FUN_005dcb00(local_8,puVar3);
      puVar2 = (undefined8 *)FUN_005d5a90(puVar3);
      local_14 = *puVar2;
    }
  }
  *param_2 = local_14;
  return param_2;
}

