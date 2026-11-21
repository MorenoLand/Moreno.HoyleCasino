// FUN_00651950  00651950

void __fastcall FUN_00651950(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  FUN_005f1ad0(*(undefined4 *)(param_1 + 0xc));
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + 0x20 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + 0x38 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x48 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + 0x58 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

