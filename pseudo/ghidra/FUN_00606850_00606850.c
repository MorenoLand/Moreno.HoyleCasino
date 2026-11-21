// FUN_00606850  00606850

void FUN_00606850(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  while (iVar1 = FUN_006063e0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00606350(0);
    FUN_0060c890(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

