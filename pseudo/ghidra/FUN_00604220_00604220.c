// FUN_00604220  00604220

void FUN_00604220(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00604460(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0062ab60(puVar1);
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

