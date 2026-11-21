// FUN_00441650  00441650

void __fastcall FUN_00441650(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar2 = FUN_005fb300(local_8);
    if (iVar2 != 0) {
      FUN_005fbcb0(0,local_8);
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x98))(1);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x70))();
    if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x9c))(1);
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x70))();
    if (*(undefined4 **)(param_1 + 0xa0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xa0))(1);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x70))();
    if (*(undefined4 **)(param_1 + 0xa4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xa4))(1);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar2 = FUN_005fb810(local_8 + 0x14);
    if (iVar2 != 0) {
      FUN_005fbe00(0,local_8 + 0x14);
    }
    FUN_005fbd10(0,local_8);
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x70 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x70 + local_8 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x70 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x70 + local_8 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x84 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x84 + local_8 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x84 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x84 + local_8 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x20 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x20 + local_8 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x20 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x20 + local_8 * 4) = 0;
    }
  }
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x34 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x34 + local_8 * 4) + 0x70))();
      puVar1 = *(undefined4 **)(param_1 + 0x34 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0x34 + local_8 * 4) = 0;
    }
  }
  return;
}

