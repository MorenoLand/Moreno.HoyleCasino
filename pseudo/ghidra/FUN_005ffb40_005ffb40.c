// FUN_005ffb40  005ffb40

void FUN_005ffb40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005ff920(param_1);
  if ((puVar1 != (undefined4 *)0x0) && (FUN_0060c890(puVar1), puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  return;
}

