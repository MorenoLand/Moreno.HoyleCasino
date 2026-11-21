// FUN_0057ae30  0057ae30

void __fastcall FUN_0057ae30(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x19d8) != 0) {
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x19dc); local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x19d8) + local_8 * 4) != 0) {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x19d8) + local_8 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x19d8) + local_8 * 4) = 0;
      }
    }
    operator_delete(*(void **)(param_1 + 0x19d8));
    *(undefined4 *)(param_1 + 0x19d8) = 0;
    *(undefined4 *)(param_1 + 0x19dc) = 0;
  }
  if (*(int *)(param_1 + 0x19d0) != 0) {
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x19d4); local_8 = local_8 + 1) {
      if (*(char *)(*(int *)(param_1 + 0x19d0) + 0x218 + local_8 * 0x224) != '\0') {
        operator_delete(*(void **)(*(int *)(param_1 + 0x19d0) + 0x21c + local_8 * 0x224));
      }
      if (*(char *)(*(int *)(param_1 + 0x19d0) + 0x219 + local_8 * 0x224) != '\0') {
        operator_delete(*(void **)(*(int *)(param_1 + 0x19d0) + 0x220 + local_8 * 0x224));
      }
    }
    operator_delete(*(void **)(param_1 + 0x19d0));
    *(undefined4 *)(param_1 + 0x19d0) = 0;
    *(undefined4 *)(param_1 + 0x19d4) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1c5) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1bd) = 0;
  if (*(int *)(param_1 + 0x19e0) != 0) {
    FUN_0057d3a0();
  }
  FUN_0057b1b0();
  FUN_0057b050();
  return;
}

