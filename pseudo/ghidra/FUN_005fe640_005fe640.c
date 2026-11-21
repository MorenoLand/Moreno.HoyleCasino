// FUN_005fe640  005fe640

undefined4 FUN_005fe640(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_2 < 1) {
    puVar2 = (undefined4 *)FUN_005ff060(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0060c890(puVar2);
      if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)*puVar2)(1);
      }
      FUN_005fdd10(uVar3);
      return 1;
    }
  }
  else {
    local_c = 0;
    for (local_10 = 0; (local_c < param_2 && (iVar1 = FUN_0060c9a0(), local_10 < iVar1));
        local_10 = local_10 + 1) {
      local_8 = (undefined4 *)FUN_005ff080(local_10);
      if (local_8[3] == param_1) {
        local_c = local_c + 1;
      }
    }
    if (local_c == param_2) {
      FUN_0060c890(local_8);
      if (local_8 != (undefined4 *)0x0) {
        (**(code **)*local_8)(1);
      }
      FUN_005fdd10();
      return 1;
    }
  }
  return 0;
}

