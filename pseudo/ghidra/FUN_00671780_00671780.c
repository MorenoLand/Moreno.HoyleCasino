// FUN_00671780  00671780

void __thiscall FUN_00671780(int *param_1,undefined4 param_2)

{
  char cVar1;
  size_t sVar2;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_1[0x5f] != 0) {
    local_8 = (char *)(**(code **)(*(int *)param_1[0x5f] + 0xb8))();
  }
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (((cVar1 != '\0') && (local_8 != (char *)0x0)) && (sVar2 = strlen(local_8), sVar2 != 0)) {
    FUN_00671430(1);
    return;
  }
  FUN_00671430(0);
  return;
}

