// FUN_00566720  00566720

void __fastcall FUN_00566720(int param_1)

{
  void *pvVar1;
  
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_00565630();
    operator_delete(pvVar1);
  }
  return;
}

