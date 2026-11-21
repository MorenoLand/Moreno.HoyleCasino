// FUN_00565630  00565630

void __fastcall FUN_00565630(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    puVar1 = *(undefined4 **)(param_1 + local_8 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
  }
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
  }
  return;
}

