// FUN_005c1550  005c1550

void __fastcall FUN_005c1550(int *param_1)

{
  char cVar1;
  
  if (param_1[4] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)param_1[4] + 8))();
    }
  }
  if (param_1[5] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)param_1[5] + 4))();
    }
  }
  return;
}

