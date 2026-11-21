// FUN_0051f790  0051f790

void __thiscall FUN_0051f790(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int local_8;
  
  piVar2 = (int *)FUN_005fb2b0(0xd);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xb0))(param_2);
    (**(code **)(*piVar2 + 0x74))();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    cVar1 = FUN_00520770(param_2,local_8);
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x94 + local_8 * 4) + 0x70))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x94 + local_8 * 4) + 0x74))();
    }
  }
  FUN_0051fc80(param_2);
  return;
}

