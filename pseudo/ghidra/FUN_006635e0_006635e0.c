// FUN_006635e0  006635e0

void FUN_006635e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

