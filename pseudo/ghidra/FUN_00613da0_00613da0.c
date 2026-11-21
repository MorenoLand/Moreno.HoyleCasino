// FUN_00613da0  00613da0

void FUN_00613da0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  while (iVar1 = FUN_0062ae50(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0062ade0(0);
    FUN_0062ab60(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

