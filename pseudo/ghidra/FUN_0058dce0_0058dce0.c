// FUN_0058dce0  0058dce0

void __fastcall FUN_0058dce0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  iVar2 = (**(code **)(*param_1 + 0xb0))();
  if (param_1[0x21] == 0) {
    if (param_1[0x1d] + 1 < iVar2) {
      (**(code **)(*(int *)param_1[0x18] + 0x74))();
      (**(code **)(*(int *)param_1[0x18] + 0xcc))();
    }
    else {
      (**(code **)(*(int *)param_1[0x18] + 0x70))();
      (**(code **)(*(int *)param_1[0x18] + 0xd0))();
    }
    if (param_1[0x1d] < 1) {
      (**(code **)(*(int *)param_1[0x17] + 0x70))();
      (**(code **)(*(int *)param_1[0x17] + 0xd0))();
    }
    else {
      (**(code **)(*(int *)param_1[0x17] + 0x74))();
      (**(code **)(*(int *)param_1[0x17] + 0xcc))();
    }
  }
  else if (param_1[0x21] == 1) {
    if ((*(int *)(*(int *)(DAT_00793584 + 0x3b68) + 4) == 0) ||
       (cVar1 = FUN_00585eb0(), cVar1 == '\0')) {
      FUN_0058def0();
    }
    else {
      if (param_1[0x1d] + 1 < iVar2) {
        (**(code **)(*(int *)param_1[0x18] + 0x74))();
        (**(code **)(*(int *)param_1[0x18] + 0xcc))();
      }
      else {
        (**(code **)(*(int *)param_1[0x18] + 0x70))();
        (**(code **)(*(int *)param_1[0x18] + 0xd0))();
      }
      if (param_1[0x1d] < 1) {
        (**(code **)(*(int *)param_1[0x17] + 0x70))();
        (**(code **)(*(int *)param_1[0x17] + 0xd0))();
      }
      else {
        (**(code **)(*(int *)param_1[0x17] + 0x74))();
        (**(code **)(*(int *)param_1[0x17] + 0xcc))();
      }
    }
  }
  return;
}

