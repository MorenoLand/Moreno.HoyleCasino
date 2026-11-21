// FUN_005f25d0  005f25d0

void FUN_005f25d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) {
      return;
    }
    puVar2 = (undefined4 *)FUN_0060ca40(local_8);
    if (puVar2[0x71] == param_1) break;
    local_8 = local_8 + 1;
  }
  FUN_0060c890(puVar2);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(1);
  return;
}

