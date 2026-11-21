// FUN_005f6eb0  005f6eb0

void __thiscall FUN_005f6eb0(int *param_1,int param_2)

{
  char cVar1;
  int local_8;
  
  FUN_005f5300(param_2);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (param_1[local_8 + 0x12] != 0) {
      (**(code **)(*(int *)param_1[local_8 + 0x12] + 0x6c))(param_2 + 2);
    }
  }
  cVar1 = FUN_005f54a0();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

