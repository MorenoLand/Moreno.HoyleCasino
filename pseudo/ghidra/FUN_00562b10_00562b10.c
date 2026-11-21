// FUN_00562b10  00562b10

void __fastcall FUN_00562b10(int *param_1)

{
  void *pvVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_00565630();
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_00565630();
    operator_delete(pvVar1);
  }
  return;
}

